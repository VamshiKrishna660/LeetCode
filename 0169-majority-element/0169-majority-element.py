class Solution:
    def majorityElement(self, nums: list[int]) -> int:
        mp = {}
        for i in nums:
            if i in mp:
                mp[i] += 1
            else:
                mp[i] = 1

        for i in mp:
            if mp[i] > len(nums)//2:
                return i