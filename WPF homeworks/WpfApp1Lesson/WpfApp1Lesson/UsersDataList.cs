using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.IO;
using System.Linq;
using System.Resources.Extensions;
using System.Text;
using System.Text.Json;
using System.Text.Json.Serialization;
using System.Threading.Tasks;
using System.Windows;

namespace WpfApp1Lesson;
static class UsersDataList
{
    public static List<User> Users { get; set; } = new List<User>();

    public static void UsersSerialize()
    {
        using FileStream fs = new("UsersData.json", FileMode.Create);
        using StreamWriter sw = new(fs);


        string json = JsonSerializer.Serialize(Users);

        sw.WriteLine(json);

    }

    public static void UsersDownload()
    {
        using FileStream fs = new("UsersData.json", FileMode.Open);
        using StreamReader sr = new(fs);

        string json = sr.ReadToEnd();

        Users = JsonSerializer.Deserialize<List<User>>(json) ?? throw new NullReferenceException();

    }

}
