class Solution:
    def merge(self, intervals: List[List[int]]) -> List[List[int]]:
        intervals.sort(key =lambda x:x[0])
        current = [intervals[0]]
        for start, end in intervals[1:]:
            if(current[-1][1] >= start):
                current[-1][1] = max(end, current[-1][1])
            else:
                current.append([start, end])
        return current