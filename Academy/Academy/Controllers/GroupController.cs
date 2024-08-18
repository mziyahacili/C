using Academy.Data.Contexts;
using Academy.Data.Models;
using Microsoft.AspNetCore.Mvc;
using Microsoft.EntityFrameworkCore;


[ApiController]
[Route("api/[controller]")]
public class GroupController : ControllerBase
{
    private readonly AcademyContext _context;

    public GroupController(AcademyContext context)
    {
        _context = context;
    }

    [HttpGet]
    public async Task<ActionResult<IEnumerable<Group>>> GetGroups()
    {
        return await _context.Groups.Include(g => g.Students).Include(g => g.Faculty).ToListAsync();
    }

    [HttpGet("{id}")]
    public async Task<ActionResult<Group>> GetGroup(string id)
    {
        var group = await _context.Groups.Include(g => g.Students).Include(g => g.Faculty).FirstOrDefaultAsync(g => g.Id == id);
        if (group == null)
        {
            return NotFound();
        }
        return group;
    }

    [HttpPost]
    public async Task<ActionResult<Group>> PostGroup(Group group)
    {
        _context.Groups.Add(group);
        await _context.SaveChangesAsync();
        return CreatedAtAction(nameof(GetGroup), new { id = group.Id }, group);
    }

    [HttpPut("{id}")]
    public async Task<IActionResult> PutGroup(string id, Group group)
    {
        if (id != group.Id)
        {
            return BadRequest();
        }
        _context.Entry(group).State = EntityState.Modified;
        try
        {
            await _context.SaveChangesAsync();
        }
        catch (DbUpdateConcurrencyException)
        {
            if (!GroupExists(id))
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
    public async Task<IActionResult> DeleteGroup(string id)
    {
        var group = await _context.Groups.FindAsync(id);
        if (group == null)
        {
            return NotFound();
        }
        _context.Groups.Remove(group);
        await _context.SaveChangesAsync();
        return NoContent();
    }

    [HttpPost("{id}/add-student")]
    public async Task<IActionResult> AddStudentToGroup(string id, [FromBody] string studentId)
    {
        var group = await _context.Groups.Include(g => g.Students).FirstOrDefaultAsync(g => g.Id == id);
        var student = await _context.Students.FindAsync(studentId);

        if (group == null || student == null)
        {
            return NotFound();
        }

        student.GroupId = id;
        group.Students.Add(student);
        await _context.SaveChangesAsync();
        return NoContent();
    }

    [HttpPost("{id}/remove-student")]
    public async Task<IActionResult> RemoveStudentFromGroup(string id, [FromBody] string studentId)
    {
        var group = await _context.Groups.Include(g => g.Students).FirstOrDefaultAsync(g => g.Id == id);
        var student = await _context.Students.FindAsync(studentId);

        if (group == null || student == null)
        {
            return NotFound();
        }

        group.Students.Remove(student);
        student.GroupId = null;
        await _context.SaveChangesAsync();
        return NoContent();
    }

    [HttpPost("{id}/change-teacher")]
    public async Task<IActionResult> ChangeGroupTeacher(string id, [FromBody] string teacherId)
    {
        var group = await _context.Groups.FirstOrDefaultAsync(g => g.Id == id);
        var teacher = await _context.Teachers.FindAsync(teacherId);

        if (group == null || teacher == null)
        {
            return NotFound();
        }

        group.TeacherId = teacherId; // Assuming you have a TeacherId in Group
        await _context.SaveChangesAsync();
        return NoContent();
    }

    private bool GroupExists(string id)
    {
        return _context.Groups.Any(e => e.Id == id);
    }
}
