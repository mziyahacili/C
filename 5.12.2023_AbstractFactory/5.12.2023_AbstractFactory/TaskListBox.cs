using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Controls;

namespace _5._12._2023_AbstractFactory;

public class TaskListBox : ITaskListBox
{
    private ListBox listBox;

    public TaskListBox()
    {
        listBox = new ListBox();
    }

    public void AddTask(string task)
    {
        listBox.Items.Add(task);
    }

    public void RemoveTask(string task)
    {
        listBox.Items.Remove(task);
    }

    public void MarkTaskAsDone(string task)
    {

    }
    public IEnumerable<string> GetTasks()
    {
        List<string> tasks = new List<string>();
        foreach (var item in listBox.Items)
        {
            tasks.Add(item.ToString());
        }
        return tasks;
    }
}
