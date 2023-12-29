
use Academy;


create table Faculties(
    Id int primary key identity(1,1),
    Name nvarchar(100) not null UNIQUE
);

create table Departments(
    Id int identity(1,1) primary key,
    Financing money not null check(Financing >= 0) default 0,
    Name nvarchar(100) not null UNIQUE,
    FacultyId int not null foreign key references Faculties(Id)
);

create table Groups(
    Id int primary key identity(1,1),
    Name nvarchar(10) not null UNIQUE,
    Year int not null check(Year between 1 and 5),
    DepartmentId int not null foreign key references Departments(Id)
);


create table Subjects(
    Id int primary key identity(1,1),
    Name nvarchar(100) not null UNIQUE,
);


create table Lectures(
    Id int primary key identity(1,1),
    DayOfWeek int not null check(DayOfWeek >= 1 and DayOfWeek <= 7),
    LectureRoom nvarchar(max) not null,
    SubjectId int not null foreign key references Subjects(Id),
    TeacherId int not null foreign key references Teachers(Id)
);

create table GroupsLectures(
    Id int primary key identity(1,1),
    GroupId int not null foreign key references Groups(Id),
    LectureId int not null foreign key references Lectures(Id)
);

create table Teachers(
    Id int primary key identity(1,1),
    Name nvarchar(max) not null,
    Salary money not null check(Salary > 0),
    Surname nvarchar(max) not null
);



select * from sys.objects where type in (N'U')


insert into Faculties (Name) VALUES ('Computer Science');

insert into Departments (Financing, Name, FacultyId) VALUES
(100000, 'Software Development', 1),
(80000, 'Database Management', 1);

insert into Groups (Name, Year, DepartmentId) VALUES
('CS101', 1, 1),
('CS102', 1, 1),
('CS201', 2, 1);

insert into Subjects (Name) VALUES
('Algorithms'),
('Database Theory'),
('Software Engineering');

insert into Teachers (Name, Salary, Surname) VALUES
('Dave McQueen', 50000, 'McQueen'),
('Jack Underhill', 60000, 'Underhill');

insert into Lectures (DayOfWeek, LectureRoom, SubjectId, TeacherId) VALUES
(1, 'D201', 1, 1),
(2, 'D202', 2, 2),
(3, 'D203', 3, 1),
(4, 'D201', 1, 2);

INSERT INTO GroupsLectures (GroupId, LectureId) VALUES
(1, 1),
(2, 2),
(3, 3),
(1, 4);


select Count(*)  as TeacherssCount from GroupsLectures
inner join Groups G on G.Id = GroupsLectures.GroupId
inner join Departments D on G.DepartmentId = D.Id
inner join Lectures L on GroupsLectures.LectureId = L.Id
inner join Teachers T on T.Id = L.TeacherId
where D.Name = 'Software Development';


select Count(*)  as LecturesCount from Lectures
inner join Teachers T on T.Id = Lectures.TeacherId
where T.Name = 'Dave McQueen';


select Count(*) as SubjectsCount from Lectures
inner join Subjects S on S.Id = Lectures.SubjectId
where LectureRoom =  'D201';


SELECT LectureRoom, COUNT(LectureRoom)
FROM Lectures
group by LectureRoom;



select AVG(T.Salary) as AverageSalary from GroupsLectures
inner join Groups G on G.Id = GroupsLectures.GroupId
inner join Departments D on D.Id = G.DepartmentId
inner join Faculties F on F.Id = D.FacultyId
inner join Lectures L on L.Id = GroupsLectures.LectureId
inner join Teachers T on T.Id = L.TeacherId
where F.Name = 'Computer Science';


select AVG(Financing) as AverageFinancing from Departments;

select T.Name,T.Surname, Count(S.Id) as SubjectsCount from Lectures
inner join Teachers T on T.Id = Lectures.TeacherId
inner join Subjects S on S.Id = Lectures.SubjectId
group by T.Name, T.Surname;

select COUNT(DayOfWeek) as DayOfWeekCount from Lectures;

select L.LectureRoom, Count(D.Id) as DepartmentsCount from GroupsLectures
inner join Groups G on G.Id = GroupsLectures.GroupId
inner join Departments D on D.Id = G.DepartmentId
inner join Lectures L on GroupsLectures.LectureId = L.Id
group by L.LectureRoom;


select F.Name, Count(S.Id) as SubjectsCount from GroupsLectures
inner join Lectures L on L.Id = GroupsLectures.LectureId
inner join Subjects S on S.Id = L.SubjectId
inner join Groups G on G.Id = GroupsLectures.GroupId
inner join Departments D on D.Id = G.DepartmentId
inner join Faculties F on F.Id = D.FacultyId
group by F.Name;

select Count(*) from Lectures;

