using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using WpfApp1Lesson.Views;

namespace WpfApp1Lesson
{


    class User
    {
        public string Name { get; set; }
        public string Surname { get; set; }
        public string Email { get; set; }
        public string Password { get; set; }

        public User(string name, string surname, string email, string password)
        {
            Name = name;
            Surname = surname;
            Email = email;
            Password = password;
        }


        public override string ToString()
        {
            return $"Name: {Name} \nSurname: {Surname} \n Email: {Email} \n Password{Password}";
        }
    }
}
