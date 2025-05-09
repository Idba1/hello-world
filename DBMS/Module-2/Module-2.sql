create table student (
    roll char(4) PRIMARY KEY,
    name varchar(50),
    marks double
);

INSERT INTO
    student (roll, name, marks)
VALUES
    (1, 'Idba Islam', 87),
    (2, 'Kawshik', 90);

SET
    SQL_SAFE_UPDATES = 0;

UPDATE
    student
SET
    name = 'Kawshik Kumar Paul'
WHERE
    roll = 2;

SET
    SQL_SAFE_UPDATES = 1;

SET
    SQL_SAFE_UPDATES = 0;

DELETE FROM
    student
WHERE
    roll = 2;

SET
    SQL_SAFE_UPDATES = 1;