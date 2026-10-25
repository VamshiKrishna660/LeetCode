class Solution:
    def isSubsequence(self, s: str, t: str) -> bool:
        i = 0
        if i == len(s):
            return True
        j = 0
        while j<len(t):
            if s[i] == t[j]:
                i += 1
                if i==len(s):
                    return True
            j += 1
        return False