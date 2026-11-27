class Solution:
    def eraseOverlapIntervals(self, intervals: List[List[int]]) -> int:
        intervals.sort(key=lambda x : x[0])
        res = []
        prev_inter = intervals[0][1]
        count = 0
        for begin, end in intervals[1:]:
            if begin < prev_inter:
                end = min(prev_inter, end)
                count += 1
            prev_inter = end
        return count