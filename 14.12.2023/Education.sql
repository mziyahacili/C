create database Education;
use Education;

create table Students(
    StudentID int primary key,
    FirstName varchar(50) not null,
    LastName varchar(50) not null,
    Age int,
    GPA float
);

create table Courses(
    CourseID int primary key,
    CourseName varchar(50) not null,
    Difficulty int,
    Credits int
);

create table Entrollments(
    EntrollmentID int primary key,
    StudentID int,
    CourseID int,
    Grade float
);



insert into Students(StudentID, FirstName, LastName, Age, GPA)
values
    (1, 'Иван', 'Иванов', 20, 3.5),
    (2, 'Мария', 'Петровна', 22, 3.8),
    (3, 'Александр', 'Сидоров', 21, 3.2),
    (4, 'Екатерина', 'Козлова', 23, 3.9),
    (5, 'Дмитрий', 'Федоров', 20, 3.0);

insert into Courses(CourseID, CourseName, Difficulty, Credits)
values
    (101,'Математика',4,3),
    (102,'Физика',3,4),
    (103,'Литература',2,3),
    (104,'История',2,3),
    (105,'Биология',3,4);

insert into Entrollments(EntrollmentID, StudentID, CourseID, Grade)
values
    (1,1,101,3.7),
    (2,1,102,4.0),
    (3,2,101,3.9),
    (4,3,103,3.5),
    (5,3,105,3.2),
    (6,4,102,3.8),
    (7,4,104,4.0),
    (8,5,105,3.1),
    (9,5,101,3.0);



select * from Students;
select * from Entrollments;
select * from Courses;

select AVG(GPA) as AvgGpaStudents from Students where StudentID = 1;


select MAX(Age) as MaxAge from Students where GPA > 3.5;
select COUNT(CourseID) as Difficult from Courses where Difficulty > 3;
select AVG(Credits) as AVG from Courses;
select MAX(Difficulty) as DificultyCourse from Courses;