--
-- @lc app=leetcode id=570 lang=mysql
--
-- [570] Managers with at Least 5 Direct Reports
--

-- @lc code=start
# Write your MySQL query statement below
select t.name
from (
    select m.name, count(*) as direct_reports
    from Employee e, Employee m
    where e.managerId = m.id
    group by m.id
) as t
where direct_reports >= 5

-- @lc code=end

