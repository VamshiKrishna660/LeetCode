class Solution:
    def countBinarySubstrings(self, s: str) -> int:
        temp = 1
        p = 0
        res = 0
        for i in range(1, len(s)):
            if s[i] == s[i-1]:
                temp += 1
            else:
                p = temp
                temp = 1
            if temp<=p:
                res += 1
        return res