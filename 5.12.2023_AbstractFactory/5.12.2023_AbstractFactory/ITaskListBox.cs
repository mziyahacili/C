using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace _5._12._2023_AbstractFactory;

public interface ITaskListBox
{
    void AddTask(string task);
    void RemoveTask(string task);
    void MarkTaskAsDone(string task);
    IEnumerable<string> GetTasks();
}
