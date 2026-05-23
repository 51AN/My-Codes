--
-- @lc app=leetcode id=1378 lang=mysql
--
-- [1378] Replace Employee ID With The Unique Identifier
--

-- @lc code=start
# Write your MySQL query statement below
select unique_id, name
from Employee left outer join EmployeeUNI 
on Employee.id = EmployeeUNI.id;
-- @lc code=end

