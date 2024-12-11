CREATE TABLE STUDENTS(
    ID INT PRIMARY KEY,
    Name VARCHAR(50),
    Age INT,
    Grade VARCHAR(5)
);

--SINGLE LINE COMMENT--

/*
MULTI LINE COMMENT
THIS IS DEMO OF IT 
*/

--INSERT QUERY
INSERT INTO STUDENTS (ID,Name,Age,Grade)
VALUES
(1,'Foram',21,'A'),
(2,'Dev',18,'B');

--UPDATE QUERY
UPDATE STUDENTS
SET Grade='A+'
WHERE Name='Dev';

--Filtering Data
SELECT * FROM Students
WHERE Age > 21;

-- Delete Query
DELETE FROM Students
WHERE ID = 2;

-- Order By
SELECT * FROM Students
ORDER BY Name ASC;

-- Group By
--  another table for demonstration
CREATE TABLE Scores (
    StudentID INT,
    Subject VARCHAR(20),
    Marks INT
);

INSERT INTO Scores (StudentID, Subject, Marks)
VALUES 
(1, 'Math', 90),
(1, 'Science', 85);

SELECT StudentID, AVG(Marks) AS AvgMarks
FROM Scores
GROUP BY StudentID;

-- Between Clause
SELECT * FROM Students
WHERE Age BETWEEN 20 AND 25;

-- Stored Procedure
DELIMITER $$
CREATE PROCEDURE GetStudentDetails()
BEGIN
    SELECT * FROM Students;
END $$
DELIMITER ;

-- Calling the Stored Procedure
CALL GetStudentDetails();