CREATE DATABASE assignmentOne;

USE assignmentOne;

-- Make a student table
CREATE TABLE Student (
    StudentID INT PRIMARY KEY,
    FirstName VARCHAR(50),
    LastName VARCHAR(50),
    DOB DATE
);

-- Make a Library table
CREATE TABLE Library (
    BookID INT PRIMARY KEY,
    Title VARCHAR(100),
    Author VARCHAR(100),
    StudentID INT,
    FOREIGN KEY (StudentID) REFERENCES Student(StudentID)
);

-- Make a Fees table
CREATE TABLE Fees (
    FeeID INT PRIMARY KEY,
    StudentID INT,
    Amount INT,
    DueDate DATE,
    FOREIGN KEY (StudentID) REFERENCES Student(StudentID)
);

DROP TABLE Library;

DROP TABLE Fees;

DROP TABLE Student;

CREATE TABLE Student (
    StudentID INT PRIMARY KEY,
    FirstName VARCHAR(50) NOT NULL,
    LastName VARCHAR(50) NOT NULL,
    DOB DATE NOT NULL
);

CREATE TABLE Library (
    BookID INT PRIMARY KEY,
    Title VARCHAR(100) NOT NULL,
    Author VARCHAR(100),
    StudentID INT,
    FOREIGN KEY (StudentID) REFERENCES Student(StudentID)
);

CREATE TABLE Fees (
    FeeID INT PRIMARY KEY,
    StudentID INT NOT NULL,
    Amount INT CHECK (Amount >= 0),
    DueDate DATE NOT NULL,
    FOREIGN KEY (StudentID) REFERENCES Student(StudentID)
);

-- CREATE TABLE
CREATE TABLE Employee (
    EmployeeID INT PRIMARY KEY,
    FirstName VARCHAR(50),
    LastName VARCHAR(50),
    Age INT,
    Department VARCHAR(50)
);

-- INSERT DATA
INSERT INTO
    Employee (EmployeeID, FirstName, LastName, Age, Department)
VALUES
    (1, 'John', 'Doe', 28, 'Sales'),
    (2, 'Jane', 'Smith', 32, 'Marketing'),
    (3, 'Michael', 'Johnson', 35, 'Finance'),
    (4, 'Sarah', 'Brown', 30, 'HR'),
    (5, 'William', 'Davis', 25, 'Engineering'),
    (6, 'Emily', 'Wilson', 28, 'Sales'),
    (7, 'Robert', 'Lee', 33, 'Marketing'),
    (8, 'Laura', 'Hall', 29, 'Finance'),
    (9, 'Thomas', 'White', 31, 'HR'),
    (10, 'Olivia', 'Clark', 27, 'Engineering');

-- 5. DISTINCT DEPARTMENTS
SELECT
    DISTINCT Department
FROM
    Employee;

-- 6. LASTNAMES SORTED BY AGE DESCENDING
SELECT
    LastName
FROM
    Employee
ORDER BY
    Age DESC;

-- 7. LASTNAME WHERE AGE > 30 AND DEPARTMENT = 'Marketing'
SELECT
    LastName
FROM
    Employee
WHERE
    Age > 30
    AND Department = 'Marketing';

-- 8. SELECT ALL EMPLOYEES
SELECT
    *
FROM
    Employee;

-- 9. NAMES INCLUDING 'son'
SELECT
    *
FROM
    Employee
WHERE
    FirstName LIKE '%son%'
    OR LastName LIKE '%son%';

-- 10. GET ENGINEERS
SELECT
    *
FROM
    Employee
WHERE
    Department = 'Engineering';