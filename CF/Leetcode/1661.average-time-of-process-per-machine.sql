--
-- @lc app=leetcode id=1661 lang=mysql
--
-- [1661] Average Time of Process per Machine
--

-- @lc code=start
# Write your MySQL query statement below
select machine_id, round(avg(diff), 3) as processing_time
from (
    select machine_id, (end_act.timestamp - start_act.timestamp) as diff
    from Activity as end_act cross join Activity as start_act
    where end_act.machine_id = start_act.machine_id 
        and end_act.process_id = start_act.process_id
        and end_act.activity_type = 'end' and start_act.activity_type = 'start'
)

-- @lc code=end

