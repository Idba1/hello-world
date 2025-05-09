CREATE DATABASE programminghero;

USE programminghero;

-- way-1
CREATE TABLE Student(
    Roll CHAR(4) PRIMARY KEY UNIQUE,
    NAME VARCHAR (50) NOT NULL,
    Email VARCHAR (50) UNIQUE,
    Address VARCHAR (255),
    Age INT CHECK(Age > 10)
);

INSERT INTO
    Student (Roll, Name, Email, Address, Age)
VALUES
    (
        '0001',
        'Idbam Islam',
        'idba@gmail.com',
        'Birulia, savar',
        12
    );

INSERT INTO
    Student (Roll, Name, Email, Address, Age)
VALUES
    (
        '0002',
        'Idbam Islam',
        'idba2@gmail.com',
        'Birulia, savar',
        12
    );

INSERT INTO
    Student (Roll, Name, Email, Age)
VALUES
    ('0003', 'Idbam Islam', 'idba3@gmail.com', 12);

-- way-2
CREATE TABLE Student(
    Roll CHAR(4),
    NAME VARCHAR (50) NOT NULL,
    Email VARCHAR (50),
    Address VARCHAR (255),
    Age INT,
    PRIMARY KEY (Roll),
    UNIQUE(Email),
    CHECK(Age > 10)
);

-- way-3
CREATE TABLE Student(
    Roll CHAR(4),
    NAME VARCHAR (50) NOT NULL,
    Email VARCHAR (50),
    Address VARCHAR (255),
    Age INT,
    CONSTRAINT pk_rule PRIMARY KEY (Roll),
    CONSTRAINT unique_rule UNIQUE(Email),
    CONSTRAINT checking_rule CHECK(Age > 10)
);

CREATE TABLE Library(
    Name VARCHAR(50),
    Roll CHAR (4),
    CONSTRAINT foreign_key_rule FOREIGN KEY (Roll) REFERENCES Student(Roll)
);

CREATE TABLE Course(
    CourseName VARCHAR(50),
    University VARCHAR(50),
    Credit INT,
    PRIMARY KEY (CourseName, University)
);

-- See all data from student table
-- SELECT QUERY
-- way -1
SELECT
    Roll,
    Name,
    Email,
    Address,
    Age
FROM
    Student;

-- way-2
SELECT
    *
FROM
    Student;

-- see only names
SELECT
    Name
FROM
    Student;

-- WHERE QUERY
-- show roll=0001's data
SELECT
    *
FROM
    Student
WHERE
    Roll = '0001';

-- show Tasfia Jahan's data
SELECT
    *
FROM
    Student
WHERE
    Name = 'Tasfia Jahan';

-- show 0002's Age
SELECT
    Age
FROM
    Student
WHERE
    Roll = '0002';

-- Arithmatic Operation
CREATE TABLE Marks(
    Roll CHAR(4) PRIMARY KEY,
    CseMarks INT,
    MeMarks INT
);

INSERT INTO
    Marks (Roll, CseMarks, MeMarks)
VALUES
    ('0001', 85, 78),
    ('0002', 90, 82),
    ('0003', 75, 88),
    ('0004', 92, 79),
    ('0005', 80, 85);

SELECT
    CseMarks + MeMarks
FROM
    Marks
WHERE
    Roll = '0001';

SELECT
    CseMarks - MeMarks
FROM
    Marks
WHERE
    Roll = '0001';

SELECT
    CseMarks / MeMarks
FROM
    Marks
WHERE
    Roll = '0002';

SELECT
    CseMarks % MeMarks
FROM
    Marks
WHERE
    Roll = '0004';

SELECT
    CseMarks + MeMarks,
    CseMarks - MeMarks,
    (CseMarks + MeMarks) / 2,
    CseMarks % 10
FROM
    Marks
WHERE
    Roll = '0001';

SELECT
    CseMarks + MeMarks,
    CseMarks - MeMarks,
    (CseMarks + MeMarks) / 2,
    CseMarks % 10
FROM
    Marks;

-- Comparison Operators
SELECT
    *
FROM
    Student
WHERE
    Age > 18;

SELECT
    *
FROM
    Student
WHERE
    Age < 18;

SELECT
    *
FROM
    Student
WHERE
    Age = 12;

SELECT
    *
FROM
    Student
WHERE
    Age != 18;

SELECT
    *
FROM
    Student
WHERE
    Age <> 12;

SELECT
    *
FROM
    Student
WHERE
    Age >= 18;

SELECT
    *
FROM
    Student
WHERE
    Age <= 18;

-- Logical AND, OR Operator
CREATE TABLE Employee (
    ID CHAR(4) PRIMARY KEY,
    Name VARCHAR(50),
    Salary INT,
    Joining DATETIME,
    Age INT
);

INSERT INTO
    Employee (ID, Name, Salary, Joining, Age)
VALUES
    (
        'E001',
        'Rahim Uddin',
        35000,
        '2023-06-15 09:00:00',
        28
    ),
    (
        'E002',
        'Karim Ali',
        40000,
        '2022-03-21 10:30:00',
        32
    ),
    (
        'E003',
        'Shanta Roy',
        30000,
        '2021-11-05 08:45:00',
        26
    ),
    (
        'E004',
        'Bappa Das',
        45000,
        '2020-08-12 11:15:00',
        35
    ),
    (
        'E005',
        'Mita Khatun',
        38000,
        '2023-01-18 09:30:00',
        30
    );

SELECT
    *
FROM
    Employee;

-- show data age less then 30 and salary grater then 12000
SELECT
    *
FROM
    employee
WHERE
    Age < 30
    AND Salary > 12000;

SELECT
    Name,
    Salary
FROM
    employee
WHERE
    Age < 30
    AND Salary > 12000;

SELECT
    *
FROM
    Employee
WHERE
    Salary > 42000
    OR Age > 35;

-- DISTINCT, ORDER BY, LIMIT,
CREATE TABLE CorporateEmployee(
    id CHAR(4) PRIMARY KEY,
    Name VARCHAR (50),
    Designation VARCHAR(50),
    Age INT,
    Salary VARCHAR(50)
);

INSERT INTO
    CorporateEmployee (id, Name, Designation, Age, Salary)
VALUES
    (
        'E001',
        'Arif Rahman',
        'Software Engineer',
        28,
        '75000'
    ),
    (
        'E002',
        'Sabina Akter',
        'Project Manager',
        35,
        '95000'
    ),
    (
        'E003',
        'Rubel Hasan',
        'Data Analyst',
        30,
        '68000'
    ),
    ('E004', 'Md. Tanvir', 'HR Manager', 40, '72000'),
    (
        'E005',
        'Sanjida Islam',
        'Software Engineer',
        27,
        '64000'
    );

SELECT
    DISTINCT Designation
FROM
    CorporateEmployee;

SELECT
    Name,
    Age
FROM
    CorporateEmployee
ORDER BY
    Age ASC;

SELECT
    Name,
    Age
FROM
    CorporateEmployee
ORDER BY
    Age DESC;

SELECT
    Name,
    Age
FROM
    CorporateEmployee
ORDER BY
    Age ASC
LIMIT
    4 OFFSET 1;

SELECT
    Name,
    Age
FROM
    CorporateEmployee
ORDER BY
    Age DESC
LIMIT
    2;

SELECT
    Name,
    Age
FROM
    CorporateEmployee
ORDER BY
    Age ASC
LIMIT
    2, 2;

-- IN, NOT IN, LIKE, AS
SELECT
    Name,
    Age
FROM
    CorporateEmployee
WHERE
    Age IN (27, 28, 30)
ORDER BY
    Age ASC;

SELECT
    *
FROM
    CorporateEmployee
WHERE
    id NOT IN ('E001', 'E003', 'E005');

SELECT
    *
FROM
    CorporateEmployee
WHERE
    Name LIKE 'S%';

SELECT
    *
FROM
    CorporateEmployee
WHERE
    Designation LIKE '%Manager%';

SELECT
    *
FROM
    CorporateEmployee
WHERE
    Name LIKE '%an';

SELECT
    *
FROM
    CorporateEmployee
WHERE
    Name LIKE 'Md.%';

SELECT
    Name AS Employee_Name,
    Age AS Employee_Age
FROM
    CorporateEmployee;

SELECT
    C.Name AS Employee_Name,
    C.Designation
FROM
    CorporateEmployee AS C;