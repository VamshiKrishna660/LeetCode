class Solution:
    def uniqueOccurrences(self, arr: list[int]) -> bool:
        mp = {}
        for i in arr:
            if i in mp:
                mp[i] += 1
            else:
                mp[i] = 1
        
        s = set()
        for i in mp:
            if mp[i] in s:
                return False
            s.add(mp[i])
        
        return True