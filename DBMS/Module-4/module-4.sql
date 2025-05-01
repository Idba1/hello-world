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

