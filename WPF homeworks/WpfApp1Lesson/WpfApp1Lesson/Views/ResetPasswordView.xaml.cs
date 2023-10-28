using Newtonsoft.Json;
using System;
using System.Collections.Generic;
using System.IO;
using System.Linq;
using System.Net;
using System.Text;
using System.Text.RegularExpressions;
using System.Threading.Tasks;
using System.Windows;
using System.Windows.Controls;
using System.Windows.Data;
using System.Windows.Documents;
using System.Windows.Input;
using System.Windows.Media;
using System.Windows.Media.Imaging;
using System.Windows.Navigation;
using System.Windows.Shapes;

namespace WpfApp1Lesson.Views;


public partial class ResetPasswordView : Page
{
    public ResetPasswordView()
    {
        InitializeComponent();
    }

    private void closeButton_Click(object sender, RoutedEventArgs e)
    {
        App.Current.Shutdown();
    }

    private void minimizeButton_Click(object sender, RoutedEventArgs e)
    {
        Window.GetWindow(this).WindowState = WindowState.Minimized;
    }


    private void resetPasswordButton_Click(object sender, RoutedEventArgs e)
    {
        string newPassword = new NetworkCredential(string.Empty, newPasswordBox.SecurePassword).Password;
        string repeatPassword = new NetworkCredential(string.Empty, repeatPasswordBox.SecurePassword).Password;

        Regex hasNumber = new Regex(@"[0-9]+");
        Regex hasUpperChar = new Regex(@"[A-Z]+");
        Regex hasMiniMaxChars = new Regex(@".{8,15}");
        Regex hasLowerChar = new Regex(@"[a-z]+");
        Regex hasSymbols = new Regex(@"[!@#$%^&*()_+=\[{\]};:<>|./?,-]");



        if (string.IsNullOrEmpty(newPassword))
        {
            MessageBox.Show("Password should not be empty!");
            newPasswordBorder.BorderBrush = Brushes.Red;
        }
        else
        {
            if (!hasUpperChar.IsMatch(newPassword))
            {
                MessageBox.Show("Password should contain At least one lower case letter");
                newPasswordBorder.BorderBrush = Brushes.Red;
                newPasswordBox.Clear();
            }
            else if (!hasMiniMaxChars.IsMatch(newPassword))
            {
                MessageBox.Show("Password should not be less than or greater than 12 characters");
                newPasswordBorder.BorderBrush = Brushes.Red;
                newPasswordBox.Clear();
            }
            else if (!hasLowerChar.IsMatch(newPassword))
            {
                MessageBox.Show("Password should contain At least one numeric value");
                newPasswordBorder.BorderBrush = Brushes.Red;
                newPasswordBox.Clear();
            }
            else if (!hasSymbols.IsMatch(newPassword))
            {
                MessageBox.Show("Password should contain At least one special case characters");
                newPasswordBorder.BorderBrush = Brushes.Red;
                newPasswordBox.Clear();
            }
            else
            {
                newPasswordBox.BorderBrush = Brushes.Green;


                if (newPassword == repeatPassword)
                {
                    for (int i = 0; i < UsersDataList.Users.Count(); i++)
                    {
                        if (UsersDataList.Users[i].Email == EmailData.Email)
                        {
                            UsersDataList.Users[i].Password = newPassword;
                        }
                    }

                    MessageBox.Show("Success");
                    NavigationService.Navigate(new SignUpPage());
                    UsersDataList.UsersSerialize();

                }
                else
                {
                    repeatPasswordBorder.BorderBrush = Brushes.Red;
                }




            }


        }
    }


    private void backButton_Click(object sender, RoutedEventArgs e)
    {
        NavigationService.GoBack();
    }


}
