class Solution:
    def findMaxConsecutiveOnes(self, nums: list[int]) -> int:
        c = 0
        maxi = 0
        for i in range(len(nums)):
            if nums[i] == 1:
                c += 1
                continue
            maxi = max(maxi, c)
            c = 0
        maxi = max(maxi, c)
        return maxi