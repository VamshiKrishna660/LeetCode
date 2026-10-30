class Solution:
    def majorityElement(self, nums: list[int]) -> list[int]:
        mp={}
        res = []
        for i in nums:
            mp[i] = mp.get(i, 0)+1
        
        print(mp)
        for i in mp:
            if mp[i]>len(nums)/3:
                res.append(i)
        return res