/* Write your T-SQL query statement below */
select
    e.name as employee
from Employee as e
Left Join Employee as m
on e.managerId =m.id
where e.salary>m.salary