class Solution:
    def longestOnes(self, nums: list[int], k: int) -> int:
        maxi = 0
        i = 0
        j = 0

        while j<len(nums):
            if nums[j] == 1:
                j += 1
                continue
            if k>0:
                k -= 1
                j += 1
            else:
                maxi = max(maxi, j-i)
                if nums[i] == 0:
                    k += 1
                i += 1
        maxi = max(maxi, j-i)
        return maxi
