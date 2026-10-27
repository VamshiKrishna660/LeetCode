class Solution:
    def majorityElement(self, nums: list[int]) -> list[int]:
        res = []
        mp = {}
        for i in nums:
            if i in mp:
                mp[i] += 1
            else:
                mp[i] = 1
        
        for i in mp:
            if mp[i] > len(nums)//3:
                res.append(i)
        return res