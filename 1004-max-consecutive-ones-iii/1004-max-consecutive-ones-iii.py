class Solution:
    def longestOnes(self, nums: list[int], k: int) -> int:
        n = len(nums)
        if (n==1 and nums[0]==1) or (n==1 and nums[0]==0 and k>0):
            return 1
        
        i = 0
        j = 0
        maxi = 0

        while j<n:
            if nums[j] == 1:
                j += 1
            else:
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