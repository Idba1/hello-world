CREATE DATABASE programminghero;

USE programminghero;

-- way-1
CREATE TABLE Student(
	Roll CHAR(4) PRIMARY KEY UNIQUE,
    NAME VARCHAR (50) NOT NULL,
    Email VARCHAR (50) UNIQUE,
    Address VARCHAR (255),
    Age INT CHECK(Age>10)
);

INSERT INTO Student (Roll, Name, Email, Address, Age)
VALUES
('0001' , 'Idbam Islam', 'idba@gmail.com', 'Birulia, savar', 12);


INSERT INTO Student (Roll, Name, Email, Address, Age)
VALUES
('0002' , 'Idbam Islam', 'idba2@gmail.com', 'Birulia, savar', 12);

INSERT INTO Student (Roll, Name, Email,  Age)
VALUES
('0003' , 'Idbam Islam', 'idba3@gmail.com',  12);



-- way-2

CREATE TABLE Student(
	Roll CHAR(4) ,
    NAME VARCHAR (50) NOT NULL,
    Email VARCHAR (50),
    Address VARCHAR (255),
    Age INT,
    PRIMARY KEY (Roll),
    UNIQUE(Email),
	CHECK(Age>10)
);

-- way-3

CREATE TABLE Student(
	Roll CHAR(4) ,
    NAME VARCHAR (50) NOT NULL,
    Email VARCHAR (50),
    Address VARCHAR (255),
    Age INT,
    CONSTRAINT pk_rule PRIMARY KEY (Roll),
    CONSTRAINT unique_rule UNIQUE(Email),
	CONSTRAINT checking_rule CHECK(Age>10)
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
PRIMARY KEY (CourseName , University)
);


-- See all data from student table
-- SELECT QUERY
-- way -1
SELECT Roll, Name, Email, Address, Age FROM Student;

-- way-2
SELECT * FROM Student;

-- see only names
SELECT Name FROM Student;





-- WHERE QUERY
-- show roll=0001's data

SELECT * FROM Student
WHERE Roll='0001';

-- show Tasfia Jahan's data

SELECT * FROM Student
WHERE Name = 'Tasfia Jahan'; 

-- show 0002's Age

SELECT Age FROM Student
WHERE Roll='0002' ;


-- Arithmatic Operation

CREATE TABLE Marks(
	Roll CHAR(4) PRIMARY KEY,
    CseMarks INT,
    MeMarks INT
);

INSERT INTO Marks (Roll, CseMarks, MeMarks)
VALUES
('0001', 85, 78),
('0002', 90, 82),
('0003', 75, 88),
('0004', 92, 79),
('0005', 80, 85);

SELECT CseMarks + MeMarks
FROM Marks 
WHERE Roll = '0001' ;

SELECT CseMarks - MeMarks
FROM Marks 
WHERE Roll = '0001' ;

SELECT CseMarks / MeMarks
FROM Marks 
WHERE Roll = '0002' ;

SELECT CseMarks % MeMarks
FROM Marks 
WHERE Roll = '0004' ;


SELECT CseMarks + MeMarks, CseMarks - MeMarks, (CseMarks + MeMarks) / 2, CseMarks % 10
FROM Marks 
WHERE Roll = '0001' ;

SELECT CseMarks + MeMarks, CseMarks - MeMarks, (CseMarks + MeMarks) / 2, CseMarks % 10
FROM Marks ;


-- Comparison Operators

SELECT * FROM Student
WHERE Age>18;

SELECT * FROM Student
WHERE Age<18;

SELECT * FROM Student
WHERE Age=12;

SELECT * FROM Student
WHERE Age!=18;

SELECT * FROM Student
WHERE Age<>12;

SELECT * FROM Student
WHERE Age>=18;

SELECT * FROM Student
WHERE Age<=18;

