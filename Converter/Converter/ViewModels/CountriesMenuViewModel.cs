using Converter.Services.Classes;
using GalaSoft.MvvmLight;
using GalaSoft.MvvmLight.Command;
using Newtonsoft.Json;
using Prism.Commands;
using System;
using System.Collections.Generic;
using System.Collections.ObjectModel;
using System.Linq;
using System.Net.Http;
using System.Security.Cryptography.X509Certificates;
using System.Text;
using System.Threading.Tasks;
using System.Windows;
using System.Windows.Controls;

namespace Converter.ViewModels;

public class CountriesMenuViewModel : ViewModelBase
{
    private readonly HttpClient client = new HttpClient();
    private readonly string apiKey = "KqaZhXlY0JvXs4flGLqfLcypm6l2AVYFGqsDg5bU";

    public DelegateCommand SearchCommand { get; set; }
    public DelegateCommand InitializeCommand { get; set; }



    private ObservableCollection<Country> _countries;
    private string _search;


    public ObservableCollection<Country> Countries
    {
        get => _countries;
        set
        {
            Set(ref _countries, value);
        }
    }

    public string SearchQuery { get => _search; set => Set(ref _search, value); }


    public CountriesMenuViewModel()
    {

        Initialize();
        MessageBox.Show("Initialize active");

        SearchCommand = new DelegateCommand(() =>
        {
            try
            {
                if (!string.IsNullOrEmpty(SearchQuery))
                {
                    var filteredCountries = Countries.Where(c => c.Name.Contains(SearchQuery)).ToList();
                    Countries.Clear();
                    foreach (var country in filteredCountries)
                    {
                        Countries.Add(country);
                    }
                }
            }
            catch (Exception ex)
            {
                MessageBox.Show($"Error searching countries: {ex.Message}", "Error", MessageBoxButton.OK, MessageBoxImage.Error);
            }

        });



    }

    public async void Initialize()
    {
        try
        {
            var request = new HttpRequestMessage
            {
                Method = HttpMethod.Get,
                RequestUri = new Uri("https://restcountries.eu/rest/v2/all"),
                Headers =
                {
                    { "Key", "KqaZhXlY0JvXs4flGLqfLcypm6l2AVYFGqsDg5bU" },
                    { "Host", "countryapi.io" },
                },
            };

            using (var response = await client.SendAsync(request))
            {
                response.EnsureSuccessStatusCode();
                var jsonResponse = await response.Content.ReadAsStringAsync();

                var countries = JsonConvert.DeserializeObject<List<Country>>(jsonResponse);

                if (countries != null)
                {
                    MessageBox.Show("Not null");
                    foreach (var country in countries)
                    {
                        MessageBox.Show(country.Name);
                    }
                }
            }
        }
        catch (Exception ex)
        {
            Console.WriteLine($"Error loading countries: {ex.Message}");
        }
    }





}
