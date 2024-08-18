using Academy.Data.Models;
using Microsoft.EntityFrameworkCore;
using System.Collections.Generic;

namespace Academy.Data.Contexts;

public class AcademyContext : DbContext
{
    public AcademyContext()
    {
                
    }


    public AcademyContext(DbContextOptions<AcademyContext> options) : base(options)
    {
            
    }

    public DbSet<Student> Students { get; set; }
    public DbSet<Teacher> Teachers { get; set; }
    public DbSet<Group> Groups { get; set; }
    public DbSet<Faculty> Faculties { get; set; }
    public DbSet<Department> Departments { get; set; }



    protected override void OnModelCreating(ModelBuilder modelBuilder)
    {
        var student = modelBuilder.Entity<Student>();
        var teacher = modelBuilder.Entity<Teacher>();
        var group = modelBuilder.Entity<Group>();
        var faculty = modelBuilder.Entity<Faculty>();
        var department = modelBuilder.Entity<Department>();


        student.HasKey(s => s.Id);
        student.Property(s => s.FirstName).IsRequired().HasMaxLength(10);
        student.Property(s => s.LastName).IsRequired().HasMaxLength(10);
        student.Property(s => s.DateOfBirth).IsRequired();
        student.HasOne(s => s.Group)  
               .WithMany(g => g.Students)  
               .HasForeignKey(s => s.GroupId);

        
        teacher.HasKey(t => t.Id);
        teacher.Property(t => t.FirstName).IsRequired().HasMaxLength(10);
        teacher.Property(t => t.LastName).IsRequired().HasMaxLength(10);
        teacher.Property(t => t.Subject).IsRequired().HasMaxLength(15);
        teacher.HasOne(t => t.Department)  
               .WithMany(d => d.Teachers) 
               .HasForeignKey(t => t.DepartmentId);

      

        group.HasKey(g => g.Id);
        group.Property(g => g.Name).IsRequired().HasMaxLength(10);
        group.HasOne(g => g.Faculty)  
             .WithMany(f => f.Groups) 
             .HasForeignKey(g => g.FacultyId);

       

        faculty.HasKey(f => f.Id);
        faculty.Property(f => f.Name).IsRequired().HasMaxLength(10);

       

        department.HasKey(d => d.Id);
        department.Property(d => d.Name).IsRequired().HasMaxLength(10);
    }

}
