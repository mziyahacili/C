using System.Text.Json;

namespace _3._12._2023_Proxy;

public class UserDataProxy : IUserData
{
    private UserData _userData;
    public UserDataProxy(UserData userData)
    {
        _userData = userData;
    }
    
    public void UsersSerialize()
    {
        _userData.UsersSerialize();
        LogData($"{DateTime.Now: dd/MM/yyyy HH::mm::ss}");
    }
    
    public void UsersDeserialize()
    {
        _userData.UsersDeserialize();
    }

    public bool CheckAccess(List<User> users)
    {
        if (users.Count > 0)
            return true;
        return false;
    }
    
    private void LogData(string date)
    {
        using FileStream fs = new FileStream("Users.json", FileMode.Append);
        using StreamWriter sw = new StreamWriter(fs);
        
        sw.WriteLine(date);
    }
    
}