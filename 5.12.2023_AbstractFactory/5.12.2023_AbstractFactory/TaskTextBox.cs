using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Controls;

namespace _5._12._2023_AbstractFactory;

public class TaskTextBox : ITaskTextBox
{
    private TextBox textBox;

    public TaskTextBox()
    {
        textBox = new TextBox();
    }

    public string TextBox { get; internal set; }

    public string GetText()
    {
        return textBox.Text;
    }
}
