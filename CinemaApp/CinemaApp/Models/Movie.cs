using System.ComponentModel.DataAnnotations;

namespace CinemaApp.Models;

public class Movie
{
    [Key]
    public int Id { get; set; }    
    [Required]
    public string Title { get; set; }
}

