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