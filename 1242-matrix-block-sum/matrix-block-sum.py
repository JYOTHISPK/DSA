class Solution:
    def matrixBlockSum(self, mat: List[List[int]], k: int) -> List[List[int]]:
        m = len(mat)
        n = len(mat[0])
        answer = [[0]*n for _ in range(m)]
        prefix = [[0]*(n+1) for _ in range(m+1)]
        
        prefix[1][1] = mat[0][0]
        for i in range(2,n+1) :
            prefix[1][i] = prefix[1][i-1] + mat[0][i-1]
        for j in range(2,m+1) :
            prefix[j][1] = prefix[j-1][1] + mat[j-1][0]
        
        for i in range(2,m+1):
            for j in range(2,n+1):
                prefix[i][j] = mat[i-1][j-1] + prefix[i-1][j] + prefix[i][j-1] - prefix[i-1][j-1]
        


        for i in range(m):
            for j in range(n):
                r1, r2, c1, c2 = max(0,i-k), min(m-1,i+k), max(0,j-k), min(n-1,j+k)

                par1 = prefix[r2+1][c2+1]

                par2 = prefix[r2+1][c1]
                
                par3 = prefix[r1][c2+1]
    
                par4 = prefix[r1][c1]

                answer[i][j] = par1 - par2 - par3 + par4

        return answer

             
                