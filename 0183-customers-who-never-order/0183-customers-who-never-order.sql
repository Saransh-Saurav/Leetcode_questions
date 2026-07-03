/* Write your T-SQL query statement below */
Select 
    c.name as customers
from Customers c
LEFT JOIN Orders o
on c.id=o.customerId
where customerId is null