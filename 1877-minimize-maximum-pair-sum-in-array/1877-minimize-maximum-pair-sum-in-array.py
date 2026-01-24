class Solution:
    def minPairSum(self, nums: List[int]) -> int:
        nums.sort()
        print(nums)
        l=0
        r = len(nums)-1
        mini = 0
        while l<r:
            p = nums[l]+nums[r]
            mini = max(mini, p)
            l += 1
            r -= 1
        return mini