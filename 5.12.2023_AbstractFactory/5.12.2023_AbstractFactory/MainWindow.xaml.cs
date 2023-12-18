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

namespace _5._12._2023_AbstractFactory
{
 
    public partial class MainWindow : Window
    {
        private ITaskManagerFactory taskManagerFactory;

        public MainWindow()
        {
            InitializeComponent();
            taskManagerFactory = new ConcreteTaskManagerFactory();

            InitializeUI();
        }

        private void InitializeUI()
        {
            ITaskButton addButton = taskManagerFactory.CreateTaskButton();
            addButton.SetText("Add Task");
            addButtonControl.Content = addButton;

            ITaskTextBox taskTextBox = taskManagerFactory.CreateTaskTextBox();
            taskTextBoxControl.Text = taskTextBox.GetText();

            ITaskListBox taskListBox = taskManagerFactory.CreateTaskListBox();
            taskListBoxControl.ItemsSource = taskListBox.GetTasks();
        }

        private void AddTaskButton_Click(object sender, RoutedEventArgs e)
        {
            string task = taskTextBoxControl.Text;
            ITaskListBox taskListBox = taskManagerFactory.CreateTaskListBox();
            taskListBox.AddTask(task);
            taskListBoxControl.ItemsSource = taskListBox.GetTasks();
            taskTextBoxControl.Clear();
        }

        private void RemoveTaskButton_Click(object sender, RoutedEventArgs e)
        {
            string selectedTask = taskListBoxControl.SelectedItem as string;
            (taskListBoxControl.ItemsSource as ITaskListBox).RemoveTask(selectedTask);
        }

        private void MarkAsDoneButton_Click(object sender, RoutedEventArgs e)
        {
            string selectedTask = taskListBoxControl.SelectedItem as string;
            (taskListBoxControl.ItemsSource as ITaskListBox).MarkTaskAsDone(selectedTask);
        }
    }
}