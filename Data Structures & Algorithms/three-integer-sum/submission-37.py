class Solution:
    def threeSum(self, nums: List[int]) -> List[List[int]]:
        result = []
        nums.sort()
        for i, a in enumerate(nums):
            if (i > 0 and a == nums[i-1]):
                continue
            leftp = i +1
            rightp = len(nums) -1

            while (leftp < rightp):
                if((a + nums[leftp] + nums[rightp]) == 0):
                    result.append([a, nums[leftp], nums[rightp]])
                    leftp += 1
                    while( leftp < rightp and nums[leftp] == nums[leftp-1]):
                        leftp += 1
                
                elif(nums[leftp] + nums[rightp] + a> 0):
                    rightp -= 1
                else:
                    leftp += 1
        return result
        