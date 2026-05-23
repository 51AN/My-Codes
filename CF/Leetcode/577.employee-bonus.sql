--
-- @lc app=leetcode id=577 lang=mysql
--
-- [577] Employee Bonus
--

-- @lc code=start
# Write your MySQL query statement below
select name, bonus
from Employee
    left outer join Bonus on Employee.id = Bonus.emp_id
where bonus < 1000 or bonus is null;
-- @lc code=end

