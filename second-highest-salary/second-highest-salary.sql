SELECT MAX(SALARY) AS SecondHighestSalary 
FROM Employee
WHERE SALARY NOT IN (SELECT MAX(SALARY) from Employee);