using System.Text.Json;

namespace _3._12._2023_Proxy;

public class UserData : IUserData
{
    private List<User> Users { get; set; }

    public UserData(List<User> users)
    {
        Users = users;
    }
    public void UsersSerialize()
    {
        using FileStream fs = new("Users.json", FileMode.Create);
        using StreamWriter sw = new(fs);

        string json = JsonSerializer.Serialize(Users);

        sw.WriteLine(json);
    }

    public void UsersDeserialize()
    {
        using FileStream fs = new("Users.json", FileMode.Open);
        using StreamReader sr = new(fs);

        string json = sr.ReadToEnd();

        // Users = JsonSerializer.Deserialize<List<User>>(json);
    }
}