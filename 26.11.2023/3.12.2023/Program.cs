
using _3._12._2023;

var builderGaming = new GamingComputerBuilder();
var builderOffice = new OfficeComputerBuilder();
var builderDesigner = new DesignerComputerBuilder();


var directorGaming = new ComputerDirector(builderGaming);
var directorOffice = new ComputerDirector(builderOffice);
var directorDesigner = new ComputerDirector(builderDesigner);

directorGaming.BuildGaming();
directorOffice.BuildDesigner();
directorDesigner.BuildOffice();

var gamingPc = builderGaming.GetComputer();
var officePc = builderOffice.GetComputer();
var designerPc = builderDesigner.GetComputer();

Console.WriteLine(gamingPc);
Console.WriteLine(officePc);
Console.WriteLine(designerPc);


