class Solution:
    def productExceptSelf(self, nums: list[int]) -> list[int]:
        res = [0]*len(nums)
        p = 1
        c = 0
        for i in nums:
            if i == 0:
                c += 1
                continue
            p *= i
        print(p)
        if c>1:
            return res
        if c == 1:
            for i in range(len(nums)):
                if nums[i] == 0:
                    res[i] = p
            return res
        
        for i in range(len(nums)):
            res[i] = p//nums[i]
        return res