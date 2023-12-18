using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Controls;

namespace _5._12._2023_AbstractFactory;

public class TaskButton : ITaskButton
{
    private Button button;

    public TaskButton()
    {
        button = new Button();
    }

    public void SetText(string text)
    {
        button.Content = text;
    }
}
