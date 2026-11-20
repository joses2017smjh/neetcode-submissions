class Solution:
    def canJump(self, nums: List[int]) -> bool:
        goal = len(nums) -1
        if goal <= 0:
            return True
        for i in range(len(nums) -1, -1, -1):
            if (nums[i -1] + (i-1)) >= goal:
                goal = i-1 
                print(i)
            #print(goal)
            if goal == 0:
                return True
        
        return False