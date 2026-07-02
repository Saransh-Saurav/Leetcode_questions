/* Write your T-SQL query statement below */
Select
    email
from Person
group by email
HAVING count(*)>1;