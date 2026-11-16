class Solution:
    def trap(self, height: List[int]) -> int:
        total_water = 0
        leftp = 0
        rightp = len(height)-1
        maxl = height[leftp]
        maxr = height[rightp]
        while(leftp < rightp):
            if(maxl <= maxr):
                leftp +=1
                if(maxl - height[leftp] > 0):
                    total_water += maxl - height[leftp]
                if(maxl < height[leftp]):
                        maxl = height[leftp]
            else:
                rightp -=1
                if(maxr - height[rightp]    > 0):
                    total_water += maxr - height[rightp]
                if(maxr < height[rightp]):
                    maxr = height[rightp]
        return total_water