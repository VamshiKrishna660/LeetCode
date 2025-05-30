class Solution:
    def closeStrings(self, word1: str, word2: str) -> bool:
        if len(word1) != len(word2):
            return False
        from collections import Counter as C
        mp1 = C(word1)
        mp2 = C(word2)

        if set(mp1.keys()) != set(mp2.keys()):
            return False
        if sorted(mp1.values()) != sorted(mp2.values()):
            return False
        return True