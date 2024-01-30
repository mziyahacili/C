using System.ComponentModel.DataAnnotations;
using Newtonsoft.Json;

namespace CinemaApp.Models;

public class MovieResultWrapper
{
    public int Id { get; set; }
    [JsonProperty("results")]
    
    [Required]
    public Movie[] Results { get; set; }
}
