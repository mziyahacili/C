using GalaSoft.MvvmLight.Messaging;
using Microsoft.Xaml.Behaviors.Core;
using SimpleInjector;
using SimpleInjector.Lifestyles;
using System;
using System.Collections.Generic;
using System.Configuration;
using System.Data;
using System.Linq;
using System.Threading.Tasks;
using Converter.ViewModels;
using System.Windows;
using Converter.Services.Interfaces;
using Converter.Services.Classes;
using Converter.Views;


namespace Converter;


public partial class App : Application
{
    public static Container Container { get; set; } = new Container();


    public void Register()
    {


        Container.RegisterSingleton<IMessenger, Messenger>();
        Container.RegisterSingleton<INavigationServices, NavigationService>();
        Container.RegisterSingleton<IDataService, DataService>();




        Container.RegisterSingleton<MainViewModel>();
        Container.RegisterSingleton<CountriesMenuViewModel>();


        Container.Verify();
    }

    protected override void OnStartup(StartupEventArgs e)
    {
        Register();

        var window = new MainView();

        window.DataContext = Container.GetInstance<MainViewModel>(); // Container.GetInstance<MainViewModel>() -- берет созданный объект из контейнера

        window.ShowDialog();
    }
}
