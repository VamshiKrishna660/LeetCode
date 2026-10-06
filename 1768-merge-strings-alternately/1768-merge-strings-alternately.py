class Solution:
    def mergeAlternately(self, word1: str, word2: str) -> str:
        x = 0
        y = 0
        res = ""
        while x<len(word1) and y<len(word2):
            res += word1[x]
            x += 1
            res += word2[y]
            y += 1
        while x<len(word1):
            res += word1[x]
            x += 1
        while y<len(word2):
            res += word2[y]
            y += 1
        
        return res