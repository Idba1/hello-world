ALTER TABLE
    EMPLOYEES
ADD
    COLUMN EMAIL VARCHAR(20);

ALTER TABLE
    EMPLOYEES DROP COLUMN SALARY;

ALTER TABLE
    EMPLOYEES
MODIFY
    COLUMN EMAIL VARCHAR(50);