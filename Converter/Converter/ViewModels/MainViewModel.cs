using Converter.Messages;
using GalaSoft.MvvmLight;
using GalaSoft.MvvmLight.Messaging;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Converter.ViewModels;

class MainViewModel : ViewModelBase
{
    private ViewModelBase _currentView;
    private readonly IMessenger _messenger;
    public ViewModelBase CurrentView
    {
        get => _currentView;
        set
        {
            Set(ref _currentView, value);
        }
    }

    public MainViewModel(IMessenger messenger)
    {

        _messenger = messenger;
        CurrentView = App.Container.GetInstance<CountriesMenuViewModel>();

        _messenger.Register<NavigationMessage>(this, message => CurrentView = message.ViewModelType);
    }
}
