using Academy.Data.Contexts;
using Academy.Data.Models;
using Microsoft.AspNetCore.Mvc;
using Microsoft.EntityFrameworkCore;

[ApiController]
[Route("api/[controller]")]
public class FacultyController : ControllerBase
{
    private readonly AcademyContext _context;

    public FacultyController(AcademyContext context)
    {
        _context = context;
    }

    [HttpGet]
    public async Task<ActionResult<IEnumerable<Faculty>>> GetFaculties()
    {
        return await _context.Faculties.Include(f => f.Groups).ToListAsync();
    }

    [HttpGet("{id}")]
    public async Task<ActionResult<Faculty>> GetFaculty(string id)
    {
        var faculty = await _context.Faculties.Include(f => f.Groups).FirstOrDefaultAsync(f => f.Id == id);
        if (faculty == null)
        {
            return NotFound();
        }
        return faculty;
    }

    [HttpPost]
    public async Task<ActionResult<Faculty>> PostFaculty(Faculty faculty)
    {
        _context.Faculties.Add(faculty);
        await _context.SaveChangesAsync();
        return CreatedAtAction(nameof(GetFaculty), new { id = faculty.Id }, faculty);
    }

    [HttpPut("{id}")]
    public async Task<IActionResult> PutFaculty(string id, Faculty faculty)
    {
        if (id != faculty.Id)
        {
            return BadRequest();
        }
        _context.Entry(faculty).State = EntityState.Modified;
        try
        {
            await _context.SaveChangesAsync();
        }
        catch (DbUpdateConcurrencyException)
        {
            if (!FacultyExists(id))
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
    public async Task<IActionResult> DeleteFaculty(string id)
    {
        var faculty = await _context.Faculties.FindAsync(id);
        if (faculty == null)
        {
            return NotFound();
        }
        _context.Faculties.Remove(faculty);
        await _context.SaveChangesAsync();
        return NoContent();
    }

    [HttpPost("{id}/add-group")]
    public async Task<IActionResult> AddGroupToFaculty(string id, [FromBody] string groupId)
    {
        var faculty = await _context.Faculties.Include(f => f.Groups).FirstOrDefaultAsync(f => f.Id == id);
        var group = await _context.Groups.FindAsync(groupId);

        if (faculty == null || group == null)
        {
            return NotFound();
        }

        faculty.Groups.Add(group);
        await _context.SaveChangesAsync();
        return NoContent();
    }

    [HttpPost("{id}/remove-group")]
    public async Task<IActionResult> RemoveGroupFromFaculty(string id, [FromBody] string groupId)
    {
        var faculty = await _context.Faculties.Include(f => f.Groups).FirstOrDefaultAsync(f => f.Id == id);
        var group = await _context.Groups.FindAsync(groupId);

        if (faculty == null || group == null)
        {
            return NotFound();
        }

        faculty.Groups.Remove(group);
        await _context.SaveChangesAsync();
        return NoContent();
    }

    private bool FacultyExists(string id)
    {
        return _context.Faculties.Any(e => e.Id == id);
    }
}
