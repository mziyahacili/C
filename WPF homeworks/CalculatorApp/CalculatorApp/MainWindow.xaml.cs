using System.Data;
using System.Text;
using System.Windows;
using System.Windows.Controls;
using System.Windows.Data;
using System.Windows.Documents;
using System.Windows.Input;
using System.Windows.Media;
using System.Windows.Media.Imaging;
using System.Windows.Navigation;
using System.Windows.Shapes;

namespace CalculatorApp
{
    /// <summary>
    /// Interaction logic for MainWindow.xaml
    /// </summary>
    public partial class MainWindow : Window
    {
        public MainWindow()
        {
            InitializeComponent();

            PlusButton.IsEnabled = false;
            DivisionButton.IsEnabled = false;
            MultButton.IsEnabled = false;
            MinusButton.IsEnabled = false;
            PercentButton.IsEnabled = false;
            EqualButton.IsEnabled = false;
            DeleteButton.IsEnabled = false;
            CEbutton.IsEnabled = false;
        }


        private void Button_Click(object sender, RoutedEventArgs e)
        {
            string res = (string)((Button)e.OriginalSource).Content;

            if (res == "C")
            {
                miniCalcTextBlock.Text = "";
                calcText.Text = "";

                PlusButton.IsEnabled = true;
                DivisionButton.IsEnabled = true;
                MultButton.IsEnabled = true;
                MinusButton.IsEnabled = true;
                PercentButton.IsEnabled = true;
                EqualButton.IsEnabled = true;
                DeleteButton.IsEnabled = true;
                CEbutton.IsEnabled = true;
            }
            else if (res == "DEL")
            {
                string newCalcTextBlock = calcText.Text.Remove(calcText.Text.Count() - 1);
                calcText.Text = newCalcTextBlock;
            }
            else if (res == "CE")
            {
                calcText.Text = "";

            }
            else if (res == "+")
            {

                miniCalcTextBlock.Text += calcText.Text + res;
                calcText.Text = "";

                PlusButton.IsEnabled = false;
                DivisionButton.IsEnabled = false;
                MultButton.IsEnabled = false;
                MinusButton.IsEnabled = false;
                PercentButton.IsEnabled = false;
                EqualButton.IsEnabled = false;
                DeleteButton.IsEnabled = false;
                CEbutton.IsEnabled = false;

            }
            else if (res == "-")
            {
                miniCalcTextBlock.Text += calcText.Text + res;
                calcText.Text = "";

                PlusButton.IsEnabled = false;
                DivisionButton.IsEnabled = false;
                MultButton.IsEnabled = false;
                MinusButton.IsEnabled = false;
                PercentButton.IsEnabled = false;
                EqualButton.IsEnabled = false;
                DeleteButton.IsEnabled = false;
                CEbutton.IsEnabled = false;

            }
            else if (res == "*")
            {
                miniCalcTextBlock.Text += calcText.Text + res;
                calcText.Text = "";

                PlusButton.IsEnabled = false;
                DivisionButton.IsEnabled = false;
                MultButton.IsEnabled = false;
                MinusButton.IsEnabled = false;
                PercentButton.IsEnabled = false;
                EqualButton.IsEnabled = false;
                DeleteButton.IsEnabled = false;
                CEbutton.IsEnabled = false;

            }
            else if (res == "/")
            {
                miniCalcTextBlock.Text += calcText.Text + res;
                calcText.Text = "";

                PlusButton.IsEnabled = false;
                DivisionButton.IsEnabled = false;
                MultButton.IsEnabled = false;
                MinusButton.IsEnabled = false;
                PercentButton.IsEnabled = false;
                EqualButton.IsEnabled = false;
                DeleteButton.IsEnabled = false;
                CEbutton.IsEnabled = false;
            }
            else if (res == "%")
            {
                miniCalcTextBlock.Text += calcText.Text + res;
                calcText.Text = "";

                PlusButton.IsEnabled = false;
                DivisionButton.IsEnabled = false;
                MultButton.IsEnabled = false;
                MinusButton.IsEnabled = false;
                PercentButton.IsEnabled = false;
                EqualButton.IsEnabled = false;
                DeleteButton.IsEnabled = false;
                CEbutton.IsEnabled = false;
            }
            else if (res == "=")
            {
                miniCalcTextBlock.Text += calcText.Text;

                string finalCalcRes = new DataTable().Compute(miniCalcTextBlock.Text, null).ToString();
                miniCalcTextBlock.Text = "";
                calcText.Text = finalCalcRes;
                Cbutton.IsEnabled = false;
            }
            else
            {
                PlusButton.IsEnabled = true;
                DivisionButton.IsEnabled = true;
                MultButton.IsEnabled = true;
                MinusButton.IsEnabled = true;
                PercentButton.IsEnabled = true;
                EqualButton.IsEnabled = true;
                DeleteButton.IsEnabled = true;
                Cbutton.IsEnabled = true;
                CEbutton.IsEnabled = true;
                calcText.Text += res;
            }
        }

        private void Minimize_Click(object sender, RoutedEventArgs e)
        {
            this.WindowState = WindowState.Minimized;

        }

        private void Close_Click(object sender, RoutedEventArgs e)
        {
            App.Current.Shutdown();
        }

        private void Maximize_Click(object sender, RoutedEventArgs e)
        {
            if (this.WindowState == WindowState.Normal)
            {
                this.WindowState = WindowState.Maximized;
            }
            else
            {
                this.WindowState = WindowState.Normal;
            }

        }

        private void Grid_MouseDown(object sender, MouseButtonEventArgs e)
        {
            this.DragMove();
        }
    }
}