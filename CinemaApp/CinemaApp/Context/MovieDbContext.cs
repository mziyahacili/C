using System.Data.Common;
using Microsoft.EntityFrameworkCore;
using Microsoft.Extensions.Configuration;

namespace CinemaApp.Models;



public class MovieDbContext : DbContext
{
    public DbSet<Movie> Movies { get; set; }
    public DbSet<MovieResultWrapper> MovieResultWrappers { get; set; }

    public MovieDbContext(DbContextOptions<MovieDbContext> options) : base(options)
    {
        
    }

    public MovieDbContext()
    {
        
    }

    protected override void OnConfiguring(DbContextOptionsBuilder optionsBuilder)
    {
        var configuration = new ConfigurationBuilder()
              .AddJsonFile("appsettings.json")
              .Build();
              
          string conStr = configuration.GetConnectionString("Default");
              
          optionsBuilder.UseSqlServer(conStr);
    }
}