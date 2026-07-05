/* Write your T-SQL query statement below */
delete e1
from Person e1
join person e2
on e1.email=e2.email
and e1.id>e2.id;