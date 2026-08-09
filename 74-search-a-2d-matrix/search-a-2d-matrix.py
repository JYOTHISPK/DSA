class Solution:
    def search(self, matrix, low, high, row, col, target):
        while low <= high:
            mid = (low + high) // 2
            print(mid)
            r = mid // col
            c = mid % col
            if target < matrix[r][c]:
                high = mid - 1
            elif target > matrix[r][c]:
                low = mid + 1
            else:
                return True
        return False

    def searchMatrix(self, matrix: List[List[int]], target: int) -> bool:
        m, n = len(matrix), len(matrix[0])
        return self.search(matrix,0,m*n-1,m,n,target)