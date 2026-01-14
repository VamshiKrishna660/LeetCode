class Solution:
    def maxSubArray(self, nums: List[int]) -> int:
        # kadanes algorithm
        curr = nums[0]
        maxi = nums[0]

        for i in nums[1:]:
            curr = max(i, curr+i)
            maxi = max(maxi, curr)
        
        return maxi
