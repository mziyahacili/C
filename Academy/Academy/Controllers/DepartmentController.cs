using Academy.Data.Contexts;
using Academy.Data.Models;
using Microsoft.AspNetCore.Mvc;
using Microsoft.EntityFrameworkCore;

[ApiController]
[Route("api/[controller]")]
public class DepartmentController : ControllerBase
{
    private readonly AcademyContext _context;

    public DepartmentController(AcademyContext context)
    {
        _context = context;
    }

    [HttpGet]
    public async Task<ActionResult<IEnumerable<Department>>> GetDepartments()
    {
        return await _context.Departments.Include(d => d.Teachers).ToListAsync();
    }

    [HttpGet("{id}")]
    public async Task<ActionResult<Department>> GetDepartment(string id)
    {
        var department = await _context.Departments.Include(d => d.Teachers).FirstOrDefaultAsync(d => d.Id == id);
        if (department == null)
        {
            return NotFound();
        }
        return department;
    }

    [HttpPost]
    public async Task<ActionResult<Department>> PostDepartment(Department department)
    {
        _context.Departments.Add(department);
        await _context.SaveChangesAsync();
        return CreatedAtAction(nameof(GetDepartment), new { id = department.Id }, department);
    }

    [HttpPut("{id}")]
    public async Task<IActionResult> PutDepartment(string id, Department department)
    {
        if (id != department.Id)
        {
            return BadRequest();
        }
        _context.Entry(department).State = EntityState.Modified;
        try
        {
            await _context.SaveChangesAsync();
        }
        catch (DbUpdateConcurrencyException)
        {
            if (!DepartmentExists(id))
            {
                return NotFound();
            }
            else
            {
                throw;
            }
        }
        return NoContent();
    }

    [HttpDelete("{id}")]
    public async Task<IActionResult> DeleteDepartment(string id)
    {
        var department = await _context.Departments.FindAsync(id);
        if (department == null)
        {
            return NotFound();
        }
        _context.Departments.Remove(department);
        await _context.SaveChangesAsync();
        return NoContent();
    }

    [HttpPost("{id}/add-teacher")]
    public async Task<IActionResult> AddTeacherToDepartment(string id, [FromBody] string teacherId)
    {
        var department = await _context.Departments.Include(d => d.Teachers).FirstOrDefaultAsync(d => d.Id == id);
        var teacher = await _context.Teachers.FindAsync(teacherId);

        if (department == null || teacher == null)
        {
            return NotFound();
        }

        department.Teachers.Add(teacher);
        await _context.SaveChangesAsync();
        return NoContent();
    }

    [HttpPost("{id}/remove-teacher")]
    public async Task<IActionResult> RemoveTeacherFromDepartment(string id, [FromBody] string teacherId)
    {
        var department = await _context.Departments.Include(d => d.Teachers).FirstOrDefaultAsync(d => d.Id == id);
        var teacher = await _context.Teachers.FindAsync(teacherId);

        if (department == null || teacher == null)
        {
            return NotFound();
        }

        department.Teachers.Remove(teacher);
        await _context.SaveChangesAsync();
        return NoContent();
    }

    private bool DepartmentExists(string id)
    {
        return _context.Departments.Any(e => e.Id == id);
    }
}
