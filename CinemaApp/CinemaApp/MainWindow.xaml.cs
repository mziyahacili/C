using CinemaApp.Services;
using System.Windows;
using System.Windows.Controls;
using CinemaApp.Models;

namespace CinemaApp;

public partial class MainWindow : Window
{
    public MainWindow()
    {
        InitializeComponent();
    }


    public async void ButtonSearchMovies_Click(object sender, RoutedEventArgs e)
    {
        using MovieDbContext context = new MovieDbContext();

        var search = searchQuery.Text;
        var moviesService = new GetMoviesService();
        
        var movies = await moviesService.GetMovies(search);
        foreach (var movie in movies)
        {
            context.Movies.Add(new() { Title = movie.Title });
        }
            
        context.SaveChanges();

        if (movies is not null)
        {
            ErrorLabel.Content = "";
            MovieListBox.ClearValue(ItemsControl.ItemsSourceProperty);
            MovieListBox.ItemsSource = movies;
        }
        else
        {
            ErrorLabel.Content = "No movies found.";
        }   
    }

}