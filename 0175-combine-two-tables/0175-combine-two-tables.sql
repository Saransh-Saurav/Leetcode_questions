/* Write your T-SQL query statement below */
Select
    p.firstname,
    p.lastname,
    a.city,
    a.state
from person as p
Left join Address as a
on p.personId=a.personId