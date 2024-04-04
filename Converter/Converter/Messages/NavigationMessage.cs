using GalaSoft.MvvmLight;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Converter.Messages;

public class NavigationMessage
{
    public ViewModelBase ViewModelType { get; set; } //ViewModel type SignInPageModel
}
