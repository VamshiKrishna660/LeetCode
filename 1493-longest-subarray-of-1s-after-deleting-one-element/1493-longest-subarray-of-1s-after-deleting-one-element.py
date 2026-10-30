class Solution:
    def longestSubarray(self, nums: list[int]) -> int:
        i = 0
        n = len(nums)
        maxi = 0
        k = 1

        for j in range(n):
            if nums[j] == 0:
                k -= 1
            while k<0:
                if nums[i]==0:
                    k += 1
                i += 1
            maxi = max(maxi, j-i)
        return maxi