using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Transactions;

namespace Converter.Services.Classes;

public class Country
{
    /// <summary>
    /// Country name
    /// </summary>
    public CountryName Name { get; set; }

    /// <summary>
    /// Top Level Domain of the country.
    /// </summary>
    public string[]? Tld { get; set; }

    /// <summary>
    /// The alpha-2 code of the country.
    /// </summary>
    public string Cca2 { get; set; }

    /// <summary>
    /// ISO 3166-1 numeric : https://en.wikipedia.org/wiki/ISO_3166-1_numeric
    /// </summary>
    public string? Ccn3 { get; set; }

    /// <summary>
    /// The alpha-3 code of the country.
    /// </summary>
    public string Cca3 { get; set; }

    /// <summary>
    /// International Olympic Committee Code.
    /// </summary>
    public string Cioc { get; set; }

    /// <summary>
    /// Is the country independent?
    /// </summary>
    public bool? Independent { get; set; }

    /// <summary>
    /// Status of the country. check out the https://restcountries.com/ for more info.
    /// </summary>
    public string? Status { get; set; }

    /// <summary>
    /// Is the country member of the United Nations ?
    /// </summary>
    public bool UnMember { get; set; }

    /// <summary>
    /// Currencies used in the country.
    /// The dictionary is the currency code, the value is a Currency
    /// object: {name: string, symbol: string}.
    /// </summary>
    public Dictionary<string, Currency>? Currencies { get; set; }

    /// <summary>
    /// International direct dialing.
    /// </summary>
    public Idd Idd { get; set; }

    /// <summary>
    /// Capital(s) of the country.
    /// </summary>
    public string[] Capital { get; set; }

    /// <summary>
    /// Alternative spellings of the country.
    /// </summary>
    public string[] AltSpellings { get; set; }

    /// <summary>
    /// Region of the country (eg. Africa, Americas, Asia, Europe, Oceania, Antarctic).
    /// </summary>
    public string Region { get; set; }

    /// <summary>
    /// The subregion of the country(eg. Western Africa, Western Europe, ...)
    /// <remarks>Can be null.</remarks>
    /// </summary>
    public string? Subregion { get; set; }

    /// <summary>
    /// Languages spoken in the country.
    /// The key of the dictionary is the language code, the value is a
    /// the language name in english.
    /// </summary>
    public Dictionary<string, string>? Languages { get; set; }

    /// <summary>
    /// Translations of the country name in other languages
    /// </summary>
    public Dictionary<string, Translation> Translations { get; set; }

    /// <summary>
    /// Gps coordinates of the country in the format: [latitude, longitude].
    /// </summary>
    private double[] LatLng { get; set; }

    /// <summary>
    /// Is the country landlocked?
    /// </summary>
    public bool Landlocked { get; set; }

    /// <summary>
    /// Neighboring countries.
    /// </summary>
    public string[] Borders { get; set; }

    /// <summary>
    /// The area of the country in square kilometers.
    /// </summary>
    public double? Area { get; set; }

    /// <summary>
    /// Demonym.
    /// </summary>
    public Demonyms? Demonyms { get; set; }

    /// <summary>
    /// Unicode flag.
    /// </summary>
    public string UnicodeFlag { get; set; }

    /// <summary>
    /// Google maps or OpenStreetMap link.
    /// </summary>
    public Maps Maps { get; set; }

    /// <summary>
    /// FIFA code.
    /// </summary>
    public string? Fifa { get; set; }

    /// <summary>
    /// Car information.
    /// </summary>
    public Car? Car { get; set; }

    /// <summary>
    /// List of timezones.
    /// </summary>
    public string[] Timezones { get; set; }

    /// <summary>
    /// Continent of the country. Only one continent is possible.
    /// The data source taken from https://restcountries.com/ return a list of
    /// one continent. That's why it's an array.
    /// </summary>
    public string[] Continents { get; set; }

    /// <summary>
    /// Flag(Url) of the country in png and svg format.
    /// </summary>
    public Flag Flag { get; set; }

    /// <summary>
    /// The week start by which day ? (eg. Sunday, Monday, ...)
    /// </summary>
    public string StartOfWeek { get; set; }

    /// <summary>
    /// Capital details. (eg. latitude, longitude, ...)
    /// </summary>
    public CapitalInformation CapitalInformation { get; set; }

    /// <summary>
    /// Postal code information (eg. format, regex).
    /// </summary>
    public PostalCode? PostalCode { get; set; }
}