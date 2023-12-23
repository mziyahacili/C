
create database Education;
use Education;
select * from sys.objects where type in (N'U');

create table Curators(
    Id int identity(1,1) primary key,
    Name nvarchar(max) not null,
    Surname nvarchar(max) not null
);

create table Faculties(
    Id int primary key identity(1,1),
    Financing money not null check(Financing >= 0) default 0,
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


create table GroupsCurators(
    Id int primary key identity(1,1),
    CuratorId int not null foreign key references Curators(Id),
    GroupId int not null foreign key references Groups(Id)
);

create table Subjects(
    Id int primary key identity(1,1),
    Name nvarchar(100) not null UNIQUE,
);


create table Lectures(
    Id int primary key identity(1,1),
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



select * from sys.objects where type in (N'U');


INSERT INTO Curators (Name, Surname)
VALUES ('John', 'Doe'),
       ('Jane', 'Smith');

INSERT INTO Faculties (Financing, Name)
VALUES (100000, 'Engineering'),
       (80000, 'Computer Science');

INSERT INTO Departments (Financing, Name, FacultyId)
VALUES (50000, 'Computer Science', 1),
       (150000, 'Electrical Engineering', 2),
       (70000, 'Physics', 2);

INSERT INTO Groups (Name, Year, DepartmentId)
VALUES ('P107', 2, 1),
       ('B103', 5, 2);

INSERT INTO GroupsCurators (CuratorId, GroupId)
VALUES (1, 1),
       (2, 2);

INSERT INTO Subjects (Name)
VALUES ('Mathematics'),
       ('Physics'),
       ('Database Theory');

INSERT INTO Teachers (Name, Salary, Surname)
VALUES ('Samantha', 60000, 'Adams'),
       ('Professor2', 55000, 'Williams');

INSERT INTO Lectures (LectureRoom, SubjectId, TeacherId)
VALUES ('B103', 1, 1),
       ('RoomB', 2, 2);

INSERT INTO GroupsLectures (GroupId, LectureId)
VALUES (1, 1),
       (2, 2);



select * from Departments;
select * from Groups;

select F.Name from Departments
inner join Faculties F on F.Id = Departments.FacultyId
where Departments.Financing > F.Financing;

select C.Surname, G.Name from GroupsCurators
inner join Curators C on C.Id = GroupsCurators.CuratorId
inner join Groups G on G.Id = GroupsCurators.GroupId;


select T.Name, T.Surname from GroupsLectures
inner join Groups G on G.Id = GroupsLectures.GroupId
inner join Lectures L on L.Id = GroupsLectures.LectureId
inner join Teachers T on L.TeacherId = T.Id
where G.Name = 'P107';

select T.Surname, F.Name from GroupsLectures
inner join Lectures L on GroupsLectures.LectureId = L.Id
inner join Teachers T on L.TeacherId = T.Id
inner join Groups G on GroupsLectures.GroupId = G.Id
inner join Departments D on G.DepartmentId = D.Id
inner join Faculties F on F.Id = D.FacultyId;

select D.Name, G.Name from GroupsLectures
inner join Groups G on GroupsLectures.GroupId = G.Id
inner join Departments D on G.Id = D.Id;

select S.Name from Lectures
inner join Teachers T on Lectures.TeacherId = T.Id
inner join Subjects S on Lectures.SubjectId = S.Id
where T.Name = 'Samantha';

select D.Name from GroupsLectures
inner join Groups G on GroupsLectures.GroupId = G.Id
inner join Departments D on G.Id = D.Id
inner join Lectures L on GroupsLectures.LectureId = L.Id
inner join Subjects S on L.SubjectId = S.Id
where S.Name = 'Database Theory';

select Groups.Name from Groups
inner join Departments D on Groups.DepartmentId = D.Id
where D.Name = 'Computer Science';



select G.Name, F.Name from Groups G
inner join Departments D on G.DepartmentId = D.Id
inner join Faculties F on D.FacultyId = F.Id
where G.Year = 5;

select T.Name, T.Surname, S.Name from Lectures
inner join Teachers T on T.Id = Lectures.TeacherId
inner join Subjects S on Lectures.SubjectId = S.Id
where LectureRoom = 'B103';