create database Academy;
go;
use Academy;


create table Groups(
    Id int identity(1,1) not null primary key,
    Name nvarchar(10) not null UNIQUE,
    Rating int not null check(Rating >= 0 and Rating <= 5),
    Year int not null check(Year >= 1 and Year <= 5),
);

create table Departments(
    Id int identity(1,1) not null primary key,
    Financing money not null check(Financing >= 0) default 0,
    Name nvarchar(100) not null UNIQUE,
);

create table Faculties(
  Id int identity(1,1) not null primary key,
    Name nvarchar(100) not null UNIQUE,
);


create table Teachers(
    Id int identity(1,1) not null primary key,
    EmploymentDate date not null check(EmploymentDate > '01.01.1990'),
    Name nvarchar(max) not null,
    Premium money not null check(Premium >= 0) default 0,
    Salary money not null check(Salary > 0),
    Surname nvarchar(max) not null
);



alter table Faculties
add Surname nvarchar(100);

alter table Faculties
drop column Surname;

SELECT * FROM sys.objects WHERE type in (N'U')


