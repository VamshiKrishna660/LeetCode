class Solution:
    def combinationSum(self, candidates: list[int], target: int) -> list[list[int]]:
        res = []
        
        def fun(i, temp, tot):
            if tot == target:
                res.append(temp.copy())
                return
            if tot > target or i >= len(candidates):
                return
            temp.append(candidates[i])
            fun(i, temp, tot+candidates[i])
            temp.pop()
            fun(i+1, temp, tot)

        fun(0, [], 0)
        return res