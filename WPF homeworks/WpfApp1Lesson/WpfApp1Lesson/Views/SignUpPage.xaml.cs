using Newtonsoft.Json;
using System;
using System.Collections.Generic;
using System.Collections.ObjectModel;
using System.IO;
using System.Linq;
using System.Net;
using System.Net.Mail;
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
    /// Interaction logic for SignUpPage.xaml
    /// </summary>
    public partial class SignUpPage : Page
    {



        public SignUpPage()
        {
            InitializeComponent();
        }


        public void signUpClick(object sender, RoutedEventArgs e)
        {
            string email = emailAddress.Text;
            Regex emailRegex = new Regex(@"^([\w\.\-]+)@([\w\-]+)((\.(\w){2,3})+)$");
            Match emailMatch = emailRegex.Match(email);

            Regex fullNameRegex = new Regex("^[A-Za-z\\s]+$");


            string name = firstName.Text;
            Match firstNameMatch = fullNameRegex.Match(name);

            string surname = lastName.Text;
            Match lastNameMatch = fullNameRegex.Match(surname);

            string password = new NetworkCredential(string.Empty, passwordTextBoxSignUp.SecurePassword).Password;



            if (emailMatch.Success)
                emailAddressBorder.BorderBrush = Brushes.Green;
            else
                emailAddressBorder.BorderBrush = Brushes.Red;


            if (firstNameMatch.Success)
                firstNameBorder.BorderBrush = Brushes.Green;
            else
                firstNameBorder.BorderBrush = Brushes.Red;

            if (lastNameMatch.Success)
                lastNameBorder.BorderBrush = Brushes.Green;
            else
                lastNameBorder.BorderBrush = Brushes.Red;


            Regex hasNumber = new Regex(@"[0-9]+");
            Regex hasUpperChar = new Regex(@"[A-Z]+");
            Regex hasMiniMaxChars = new Regex(@".{8,15}");
            Regex hasLowerChar = new Regex(@"[a-z]+");
            Regex hasSymbols = new Regex(@"[!@#$%^&*()_+=\[{\]};:<>|./?,-]");



            if (string.IsNullOrEmpty(password))
            {
                MessageBox.Show("Password should not be empty!");
                passwordBorder.BorderBrush = Brushes.Red;
            }
            else
            {
                if (!hasUpperChar.IsMatch(password))
                {
                    MessageBox.Show("Password should contain At least one lower case letter");
                    passwordBorder.BorderBrush = Brushes.Red;
                    passwordTextBoxSignUp.Clear();
                }
                else if (!hasMiniMaxChars.IsMatch(password))
                {
                    MessageBox.Show("Password should not be less than or greater than 12 characters");
                    passwordBorder.BorderBrush = Brushes.Red;
                    passwordTextBoxSignUp.Clear();
                }
                else if (!hasLowerChar.IsMatch(password))
                {
                    MessageBox.Show("Password should contain At least one numeric value");
                    passwordBorder.BorderBrush = Brushes.Red;
                    passwordTextBoxSignUp.Clear();
                }
                else if (!hasSymbols.IsMatch(password))
                {
                    MessageBox.Show("Password should contain At least one special case characters");
                    passwordBorder.BorderBrush = Brushes.Red;
                    passwordTextBoxSignUp.Clear();
                }
                else
                {
                    passwordBorder.BorderBrush = Brushes.Green;

                    if (emailMatch.Success && firstNameMatch.Success && lastNameMatch.Success)
                    {


                        string smtpServer = "smtp.mail.ru";
                        int smtpPort = 587;
                        string smtpUsername = "firdovsi20011@mail.ru";
                        string smtpPassword = "kBGKsATGGzH7jVsS0fhX\r\n";

                        using (SmtpClient smtpClient = new SmtpClient(smtpServer, smtpPort))
                        {
                            smtpClient.Credentials = new NetworkCredential(smtpUsername, smtpPassword);
                            smtpClient.EnableSsl = true;

                            using (MailMessage mailMessage = new MailMessage())
                            {
                                mailMessage.From = new MailAddress(smtpUsername);
                                mailMessage.To.Add(email);
                                mailMessage.Subject = "Registration message";
                                mailMessage.Body = $"Welcome {name}. You successful registration. And this your account password - {password}.";

                                try
                                {
                                    User user = new User(name, surname, email, password);

                                    int checkUserHaving = 0;

                                    for (int i = 0; i < UsersDataList.Users.Count(); i++)
                                    {
                                        if (UsersDataList.Users[i].Email == email)
                                        {
                                            MessageBox.Show("A user with this email exists");
                                            emailAddressBorder.BorderBrush = Brushes.Red;
                                            checkUserHaving++;
                                        }
                                    }

                                    if (checkUserHaving == 0)
                                    {
                                        smtpClient.Send(mailMessage);
                                        MessageBox.Show("You have successfully registered");

                                        UsersDataList.Users.Add(user);

                                        lastName.Clear();
                                        firstName.Clear();
                                        emailAddress.Clear();
                                        passwordTextBoxSignUp.Clear();
                                    }

                                }
                                catch (Exception ex)
                                {
                                    MessageBox.Show($"Ошибка отправки сообщения: {ex.Message}");
                                    emailAddressBorder.BorderBrush = Brushes.Red;
                                }
                            }



                        }


                    }

                }

            }
        }

        private void signInClick(object sender, RoutedEventArgs e)
        {
            NavigationService.Navigate(new SignInPage());
        }

        private void closeButton_Click(object sender, RoutedEventArgs e)
        {
            UsersDataList.UsersSerialize();
            App.Current.Shutdown();
        }

        private void minimizeButton_Click(object sender, RoutedEventArgs e)
        {
            Window.GetWindow(this).WindowState = WindowState.Minimized;
        }




        
    }
}
