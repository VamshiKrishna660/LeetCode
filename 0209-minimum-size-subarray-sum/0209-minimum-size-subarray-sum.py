class Solution:
    def minSubArrayLen(self, target: int, nums: List[int]) -> int:
        l=0
        c=float('inf')
        temp = 0
        
        for i in range(len(nums)):
            temp += nums[i]
            while temp >= target:
                c = min(c, i-l+1)
                temp -= nums[l]
                l += 1
        return 0 if c==float('inf') else c
        