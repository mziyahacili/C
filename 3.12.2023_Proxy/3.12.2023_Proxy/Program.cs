using _3._12._2023_Proxy;



List<User> users = new();
User user = new User { Id = "56789", Name = "Maga", Surname = "Maga" };
User user2 = new User { Id = "12345", Name = "Ziya", Surname = "Hacili" };

users.Add(user);

users.Add(user2);

IUserData userData = new UserDataProxy(new UserData(users));
userData.UsersSerialize();

