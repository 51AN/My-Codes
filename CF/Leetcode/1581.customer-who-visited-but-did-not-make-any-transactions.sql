--
-- @lc app=leetcode id=1581 lang=mysql
--
-- [1581] Customer Who Visited but Did Not Make Any Transactions
--

-- @lc code=start
# Write your MySQL query statement below
select Visits.customer_id, COUNT(Visits.visit_id) as count_no_trans
from Visits join Transactions on Visits.visit_id not in (select visit_id from Transactions)
order by count_no_trans desc;
-- @lc code=end

