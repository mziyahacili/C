using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace _5._12._2023_AbstractFactory;


public class ConcreteTaskManagerFactory : ITaskManagerFactory
{

    public ITaskButton CreateTaskButton()
    {
        return new TaskButton();
    }

    public ITaskListBox CreateTaskListBox()
    {
        return new TaskListBox();
    }

    public ITaskTextBox CreateTaskTextBox()
    {
        return new TaskTextBox();
    }
}
