class Solution:
    def canPartition(self, nums: List[int]) -> bool:
        if(sum(nums) % 2):
            return False

        sums = set()
        sums.add(0)
        for i in range(len(nums)):
            cur= set()
            for i2 in sums:
                cur.add(i2 + nums[i])
                cur.add(i2)
            sums = cur
            if ((sum(nums) // 2) in sums or (sum(nums) // 2) in cur):
                return True

        
        return False;