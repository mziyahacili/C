using System;
using System.Collections.Generic;
using System.Collections.Immutable;
using System.Linq;
using System.Net;
using System.Security.Cryptography.X509Certificates;
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

namespace WpfApp1Lesson.Views
{
    /// <summary>
    /// Interaction logic for SignInPage.xaml
    /// </summary>
    public partial class SignInPage : Page
    {
        public SignInPage()
        {
            InitializeComponent();
        }

        private void backPageButton(object sender, RoutedEventArgs e)
        {
            NavigationService.GoBack();
        }

        private void signInButton(object sender, RoutedEventArgs e)
        {
            string email = emailAddress.Text;
            Regex emailRegex = new Regex(@"^([\w\.\-]+)@([\w\-]+)((\.(\w){2,3})+)$");
            Match emailMatch = emailRegex.Match(email);

            string password = new NetworkCredential(string.Empty, passwordTextBox.SecurePassword).Password;
            bool userChecking = false;


            if (emailMatch.Success)
            {
                try
                {

                    if (UsersDataList.Users.Count() == 0)
                    {
                        MessageBox.Show("Registration");
                    }
                    else
                    {
                        for (int i = 0; i < UsersDataList.Users.Count(); i++)
                        {
                            if (UsersDataList.Users[i].Email == email && UsersDataList.Users[i].Password == password)
                            {
                                userChecking = true;
                                MessageBox.Show("You entered your account");
                                emailAddress.Clear();
                                passwordTextBox.Clear();
                            }
                            else if (UsersDataList.Users[i].Email == email && UsersDataList.Users[i].Password != password)
                            {
                                userChecking = true;
                                MessageBox.Show("Wrong password");
                                passwordTextBox.Clear();
                            }
                          
                        }

                        if (userChecking == false) 
                        {
                            MessageBox.Show("This user is not having!");
                            emailAddress.Clear();
                            passwordTextBox.Clear();
                        }

                    }




                }
                catch (Exception ex)
                {
                    MessageBox.Show(ex.Message);
                }

            }
            else
                emailAddressBorder.BorderBrush = Brushes.Red;

        }

        private void closeButton_Click(object sender, RoutedEventArgs e)
        {
            App.Current.Shutdown();
        }

        private void minimizeButton_Click(object sender, RoutedEventArgs e)
        {
            Window.GetWindow(this).WindowState = WindowState.Minimized;
        }

        private void forgotPasswordButton_Click(object sender, RoutedEventArgs e)
        {
            NavigationService.Navigate(new ForgotPasswordPage());
        }

       
    }
}
