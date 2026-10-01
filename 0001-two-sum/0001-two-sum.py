class Solution:
    def twoSum(self, nums: list[int], target: int) -> list[int]:
        res = []
        mp = {}
        for i in range(len(nums)):
            temp = target - nums[i]
            if temp in mp:
                res.append(mp[temp])
                res.append(i)
                break
            mp[nums[i]] = i
        return res
