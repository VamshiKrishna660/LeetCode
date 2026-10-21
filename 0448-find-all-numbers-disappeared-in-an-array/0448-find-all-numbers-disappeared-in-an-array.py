class Solution:
    def findDisappearedNumbers(self, nums: list[int]) -> list[int]:
        s = set(nums)
        res = []
        i = 1
        while i<=len(nums):
            if i in s:
                i += 1
                continue
            res.append(i)
            i += 1
        return res
            