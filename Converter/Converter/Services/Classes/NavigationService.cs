using Converter.Services.Interfaces;
using GalaSoft.MvvmLight.Messaging;
using GalaSoft.MvvmLight;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using Converter.Messages;

namespace Converter.Services.Classes;

public class NavigationService : INavigationServices
{
    private readonly IMessenger _messenger;

    public NavigationService(IMessenger messenger)
    {
        _messenger = messenger;
    }


    public void NavigateTo<T>() where T : ViewModelBase
    {
        _messenger.Send(new NavigationMessage()
        {
            ViewModelType = App.Container.GetInstance<T>() //  ViewModelType = SignInPageModel
        }
        );
    }


}
