class Solution:
    def lengthOfLongestSubstring(self, s: str) -> int:
        i = 0
        x = set()
        maxi = 0

        for j in range(len(s)):
            while s[j] in x:
                x.remove(s[i])
                i += 1
            
            x.add(s[j])
            maxi = max(maxi, j-i+1)
        return maxi