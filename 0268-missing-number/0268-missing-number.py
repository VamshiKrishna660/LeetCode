class Solution:
    def missingNumber(self, nums: List[int]) -> int:
        i = 0
        if i not in nums:
            return i
        while i in nums:
            i += 1
        return i