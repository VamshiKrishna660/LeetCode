class Solution:
    def eraseOverlapIntervals(self, intervals: List[List[int]]) -> int:
        intervals.sort(key=lambda x:x[1])

        n = len(intervals)
        c=0
        free = intervals[0][1]
        for i in range(1, n):
            if free <= intervals[i][0]:
                print(free)
                free = intervals[i][1]
                continue
            c += 1
        return c   
            