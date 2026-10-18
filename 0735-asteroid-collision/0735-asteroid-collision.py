class Solution:
    def asteroidCollision(self, asteroids: list[int]) -> list[int]:
        l = []        
        for a in asteroids:
            while l and l[-1]>0 and a<0:
                if l[-1]<abs(a):
                    l.pop()
                    continue
                elif l[-1] == abs(a):
                    l.pop()
                break
            else:
                l.append(a)
        return l