class Solution:
    def maxSubArray(self, nums: List[int]) -> int:
        m = -2**31
        sum=0
        for i in range(0,len(nums)):
            sum+=nums[i]
            m=max(m,sum)
            if sum<0:
                sum=0
        return m