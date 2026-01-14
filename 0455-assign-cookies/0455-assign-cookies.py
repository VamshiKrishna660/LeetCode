class Solution:
    def findContentChildren(self, g: List[int], s: List[int]) -> int:
        g.sort()
        s.sort()
        l = r = c = 0
        m = len(g)
        n = len(s)

        while l<m and r<n:
            if g[l] <= s[r]:
                c += 1
                l += 1
                
            r += 1
        
        return c