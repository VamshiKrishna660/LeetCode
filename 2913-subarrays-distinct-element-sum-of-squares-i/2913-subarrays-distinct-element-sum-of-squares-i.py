class Solution:
    def sumCounts(self, nums: List[int]) -> int:
        n = len(nums)
        l = []
        total = 0
        for i in range(0, n):
            s = set()
            for j in range(i, n):
                s.add(nums[j])
                total += len(s)**2
            
        return total