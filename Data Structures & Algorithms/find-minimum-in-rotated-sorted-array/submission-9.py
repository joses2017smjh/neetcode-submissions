class Solution:
    def findMin(self, nums: List[int]) -> int:
        rightp = len(nums) -1
        leftp = 0

        mint = (nums[leftp])
        while(leftp <= rightp):
            mins = leftp + (rightp - leftp) // 2
            if(mint > nums[mins] ):
                mint = nums[mins]

                rightp = mins -1
                
            else:
                leftp = mins + 1
        return mint