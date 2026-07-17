/* Write your T-SQL query statement below */
SELECT
(
    SELECT DISTINCT salary
    FROM Employee
    ORDER BY salary DESC
    OFFSET 1 ROWS --It skips te highest row
    FETCH NEXT 1 ROWS ONLY --It fetch 1 row only i.e,the second highest row
) AS SecondHighestSalary;

/*  
    SELECT
      (query) AS SecondHighestSalary;

hmne aise isiliye kra kyuki wse agr second highest exist na kre to to kuchh nhi return krta joki error dikhata h yha pe
Now hmne aise kia h aur abb agr inner output kuchh na ho to output null aata h joki acceptable answer hai
*/