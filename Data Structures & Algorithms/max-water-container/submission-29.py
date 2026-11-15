class Solution:
    def maxArea(self, heights: List[int]) -> int:
        #initailizers for pointers
        leftp = 0
        rightp = len(heights) -1
        #gets the current length for area
        width = (rightp - leftp)
        area = min(heights[leftp], heights[rightp]) * width
        while ( leftp < rightp):
            if(heights[leftp] < heights[rightp]):
                leftp += 1
            else:
                rightp -=1
            width = (rightp - leftp)
            if(area < (min(heights[leftp], heights[rightp]) * width)):
                area = min(heights[leftp], heights[rightp]) * width
        return area

        
        