using MaterialDesignThemes.Wpf;
using System;
using System.Collections.Generic;
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
using System.Xml.Linq;

namespace WpfApp1Lesson.Views
{
    /// <summary>
    /// Interaction logic for ForgotPasswordPage.xaml
    /// </summary>
    public partial class ForgotPasswordPage : Page
    {
        public ForgotPasswordPage()
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

        private void backButtonClick(object sender, RoutedEventArgs e)
        {
            NavigationService.GoBack();
        }

        int codeInt = 0;
        private void sendCodeClick_Click(object sender, RoutedEventArgs e)
        {
            string email = emailResetBox.Text;
            

            Regex emailRegex = new Regex(@"^([\w\.\-]+)@([\w\-]+)((\.(\w){2,3})+)$");
            Match emailMatch = emailRegex.Match(email);

            if (emailMatch.Success)
            {
                List<User> users = UsersDataList.Users;

                for (int i = 0; i < users.Count(); i++)
                {
                    if (users[i].Email == email)
                    {
                        EmailData.Email = email;

                        emailResetBorder.BorderBrush = Brushes.Green;

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
                                mailMessage.Subject = "Reset password message";
                                Random codeReset = new Random();


                                codeInt = codeReset.Next(100000);


                                mailMessage.Body = codeInt.ToString();


                                try
                                {
                                    smtpClient.Send(mailMessage);
                                    MessageBox.Show("Сообщение успешно отправлено.");
                                }
                                catch (Exception ex)
                                {
                                    MessageBox.Show($"Ошибка отправки сообщения: {ex.Message}");
                                }
                            }

                        }
                    }
                }

              
            }
            else
                emailResetBorder.BorderBrush = Brushes.Red;
        }

    

        private void checkCodeButton_Click(object sender, RoutedEventArgs e)
        {
            if (codeForResset.Text == codeInt.ToString())
            {
                codeForRessetBorder.BorderBrush = Brushes.Green;
                MessageBox.Show("Success");

                NavigationService.Navigate(new ResetPasswordView());
            }
            else
            {
                codeForRessetBorder.BorderBrush = Brushes.Red;
            }
        }
    }
}
