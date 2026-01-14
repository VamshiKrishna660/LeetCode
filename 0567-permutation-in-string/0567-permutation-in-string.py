class Solution:
    def checkInclusion(self, s1: str, s2: str) -> bool:
        if len(s1) > len(s2):
            return False
        
        x = [0]*26
        y = [0]*26

        for i in range(len(s1)):
            x[ord(s1[i]) - ord('a')] += 1
            y[ord(s2[i]) - ord('a')] += 1
        
        for i in range(len(s2) - len(s1)):
            if x == y:
                return True
            y[ord(s2[i]) - ord('a')] -= 1
            y[ord(s2[i+len(s1)]) - ord('a')] += 1

        return x == y