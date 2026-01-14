class Solution:
    def rowAndMaximumOnes(self, mat: List[List[int]]) -> List[int]:
        c=0
        row = 0
        maxi = 0
        m = len(mat)
        n = len(mat[0])
        for i in range(m):
            for j in range(n):
                if mat[i][j] == 1:
                    print(i, j)
                    c += 1
            if maxi < c:
                row = i
                maxi = c
            c = 0
        
        return [row, maxi]