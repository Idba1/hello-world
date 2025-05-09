-- subQuery
USE DUMMYDB;

SELECT
    *
FROM
    EMPLOYEES;

SELECT
    *
FROM
    EMPLOYEES
WHERE
    FIRST_NAME = 'Peter';

SELECT
    *
FROM
    EMPLOYEES
WHERE
    EMPLOYEE_ID = 144;

SELECT
    *
FROM
    EMPLOYEES
WHERE
    SALARY < 2500;

SELECT
    *
FROM
    EMPLOYEES
WHERE
    SALARY < (
        SELECT
            SALARY
        FROM
            EMPLOYEES
        WHERE
            EMPLOYEE_ID = 127
    );

SELECT
    *
FROM
    EMPLOYEES
WHERE
    SALARY < (
        SELECT
            SALARY
        FROM
            EMPLOYEES
        WHERE
            EMPLOYEE_ID = 144
    );

SELECT
    *
FROM
    EMPLOYEES
WHERE
    SALARY = (
        SELECT
            MAX(SALARY)
        FROM
            EMPLOYEES
    );

SELECT
    *
FROM
    DEPARTMENTS;

SELECT
    *
FROM
    EMPLOYEES;

SELECT
    *
FROM
    EMPLOYEES
WHERE
    DEPARTMENT_ID = (
        SELECT
            DEPARTMENT_ID
        FROM
            DEPARTMENTS
        WHERE
            DEPARTMENT_NAME = 'Marketing'
    );

SELECT
    AVG(SALARY)
FROM
    EMPLOYEES
WHERE
    DEPARTMENT_ID = (
        SELECT
            DEPARTMENT_ID
        FROM
            DEPARTMENTS
        WHERE
            DEPARTMENT_NAME = 'Marketing'
    );

SELECT
    MAX(SALARY)
FROM
    EMPLOYEES
WHERE
    DEPARTMENT_ID = (
        SELECT
            DEPARTMENT_ID
        FROM
            DEPARTMENTS
        WHERE
            DEPARTMENT_NAME = 'Marketing'
    );

SELECT
    MIN(SALARY)
FROM
    EMPLOYEES
WHERE
    DEPARTMENT_ID = (
        SELECT
            DEPARTMENT_ID
        FROM
            DEPARTMENTS
        WHERE
            DEPARTMENT_NAME = 'Marketing'
    );

SELECT
    COUNT(*) AS MEMBERS
FROM
    EMPLOYEES
WHERE
    DEPARTMENT_ID = (
        SELECT
            DEPARTMENT_ID
        FROM
            DEPARTMENTS
        WHERE
            DEPARTMENT_NAME = 'IT'
    );

SELECT
    SUM(MAX_SALARY)
FROM
    JOBS
WHERE
    JOB_TITLE = (
        SELECT
            JOB_TITLE
        FROM
            JOBS
        WHERE
            JOB_TITLE = 'Programmer'
    );

SELECT
    SUM(MIN_SALARY)
FROM
    JOBS
WHERE
    JOB_TITLE = (
        SELECT
            JOB_TITLE
        FROM
            JOBS
        WHERE
            JOB_TITLE = 'Programmer'
    );

SELECT
    SUM(SALARY)
FROM
    EMPLOYEES
WHERE
    JOB_ID = (
        SELECT
            JOB_ID
        FROM
            JOBS
        WHERE
            JOB_TITLE = 'Programmer'
    );

-- ADVANCE SUB QUERY
SELECT
    *
FROM
    EMPLOYEES;

SELECT
    DISTINCT SALARY
FROM
    EMPLOYEES
ORDER BY
    SALARY DESC
LIMIT
    1 OFFSET 1;

SELECT
    *
FROM
    EMPLOYEES
WHERE
    SALARY = (
        SELECT
            DISTINCT SALARY
        FROM
            EMPLOYEES
        ORDER BY
            SALARY DESC
        LIMIT
            1 OFFSET 1
    );

SELECT
    MAX(SALARY)
FROM
    EMPLOYEES
WHERE
    SALARY < (
        SELECT
            MAX(SALARY)
        FROM
            EMPLOYEES
    );

SELECT
    *
FROM
    EMPLOYEES
WHERE
    SALARY = (
        SELECT
            MAX(SALARY)
        FROM
            EMPLOYEES
        WHERE
            SALARY < (
                SELECT
                    MAX(SALARY)
                FROM
                    EMPLOYEES
            )
    );

SELECT
    *
FROM
    EMPLOYEES AS EMP
WHERE
    SALARY > (
        SELECT
            SALARY
        FROM
            EMPLOYEES AS MGR
        WHERE
            EMP.MANAGER_ID = MGR.EMPLOYEE_ID
    );

SELECT
    *
FROM
    EMPLOYEES AS EMP
WHERE
    JOB_ID = (
        SELECT
            JOB_ID
        FROM
            EMPLOYEES AS MGR
        WHERE
            EMP.MANAGER_ID = MGR.EMPLOYEE_ID
    );

-- common table expression
WITH TEMP AS(
    SELECT
        *
    FROM
        EMPLOYEES
    LIMIT
        5
)
SELECT
    *
FROM
    TEMP;

SELECT
    AVG(SALARY)
FROM
    EMPLOYEES
WHERE
    DEPARTMENT_ID = 60;

SELECT
    MAX(SALARY)
FROM
    EMPLOYEES
WHERE
    DEPARTMENT_ID = 20;

WITH AVGIT AS (
    SELECT
        AVG(SALARY) AS SAL1
    FROM
        EMPLOYEES
    WHERE
        DEPARTMENT_ID = 60
),
-- IT
MAXMTK AS (
    SELECT
        MAX(SALARY) AS SAL2
    FROM
        EMPLOYEES
    WHERE
        DEPARTMENT_ID = 20
) -- MARKETING
SELECT
    *
FROM
    EMPLOYEES
WHERE
    SALARY > (
        SELECT
            SAL1
        FROM
            AVGIT
    )
    AND SALARY < (
        SELECT
            SAL2
        FROM
            MAXMTK
    );