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
    Dean nvarchar(max) not null
);


create table Teachers(
    Id int identity(1,1) not null primary key,
    EmploymentDate date not null check(EmploymentDate > '01.01.1990'),
    IsAssistant bit not null default 0,
    IsProfessor bit not null default 0,
    Name nvarchar(max) not null,
    Position nvarchar(max) not null,
    Premium money not null check(Premium >= 0) default 0,
    Salary money not null check(Salary > 0),
    Surname nvarchar(max) not null
);







insert into Departments(Financing, Name) values(500, N'Department name 1')
insert into Departments(Financing, Name) values(3000, N'Department name 2')
insert into Departments(Financing, Name) values(1200, N'Department name 3')
insert into Departments(Financing, Name) values(20000, N'Department name 4')
insert into Departments(Financing, Name) values(16000, N'Department name 5')
insert into Departments(Financing, Name) values(30000, N'Department name 6')



select * from Departments
order by Id DESC;


insert into Groups(Name, Rating, Year) values(N'FBMS3228RU', 5, 1);

select Name,Rating from Groups;


insert into Teachers(employmentdate, isassistant, isprofessor, name, position, premium, salary, surname)
values('12.02.2020',0,0, N'Elvin', N'Teacher', 500, 2000, N'Azimov');

insert into Teachers(employmentdate, isassistant, isprofessor, name, position, premium, salary, surname)
values('12.02.2020',0,0, N'Axmed', N'Teacher', 1600, 3000, N'Salmanov');

insert into Teachers(employmentdate, isassistant, isprofessor, name, position, premium, salary, surname)
values('12.02.2020',0,0, N'Tahir', N'Teacher', 1600, 3000, N'Mirzoyev');

insert into Teachers(employmentdate, isassistant, isprofessor, name, position, premium, salary, surname)
values('12.02.2020',0,1, N'Valentin', N'Professor', 400, 1000, N'Petuxov');

insert into Teachers(employmentdate, isassistant, isprofessor, name, position, premium, salary, surname)
values('12.02.2020',0,1, N'Aleksandr', N'Professor', 1000, 5000, N'Xovanksiy');


select Surname from Teachers where IsProfessor = 1 and Salary > 1500;


insert into Faculties(Name, Dean) values(N'Computer science', N'Hikmet');
insert into Faculties(Name, Dean) values(N'Department of Biology', N'Hikmet');
insert into Faculties(Name, Dean) values(N'Military Facultye', N'Hikmet');



select * from Faculties;

select 'The dean of faculty ' + Name + ' is ' + Dean as FacultyInfo
from Faculties;

select Name from Departments where Financing < 11000 or Financing > 25000;

select Name from Faculties where Name !=  N'Computer science';

select Surname,Position from Teachers where IsProfessor = 1;


select Surname,Position from Teachers where IsProfessor = 0;

select Surname, Position, Premium from Teachers where Premium >= 160 and Premium <= 550;

select Surname, Position from Teachers where IsAssistant = 1;

select Surname, Position from Teachers where EmploymentDate = '01.01.2000';


select Surname from Teachers where IsAssistant = 1 and Salary <= 1200 and Premium <= 1200;


select Name from Groups where Year = 5 and Rating between 2 and 4;

select Surname from Teachers where IsAssistant = 1 and Salary < 550 or Premium < 200;
