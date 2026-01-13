class Solution:
    def lengthOfLongestSubstring(self, s: str) -> int:
        vis = set()
        l = 0
        c=0
        for i in range(len(s)):
            while s[i] in vis:
                vis.remove(s[l])
                l += 1
            vis.add(s[i])
            c = max(c, i-l+1)
        return c