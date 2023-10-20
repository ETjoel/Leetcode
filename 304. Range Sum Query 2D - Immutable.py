class NumMatrix:
    pref = [[]]
    def __init__(self, matrix: List[List[int]]):
        rows = len(matrix)
        cols = len(matrix[0])
        self.pref = [[0] * cols for _ in range(rows)]
        for i in range(rows):
            for j in range(cols):
                top = 0 if i == 0 else self.pref[i - 1][j]
                left = 0 if j == 0 else self.pref[i][j - 1]
                diagonal = 0 if i == 0 or j == 0 else self.pref[i - 1][j - 1]
                self.pref[i][j] = top + left - diagonal + matrix[i][j]  
        #print(self.pref)
    def sumRegion(self, row1: int, col1: int, row2: int, col2: int) -> int:
        
        ans = self.pref[row2][col2]
        print(ans)
        ans -= 0 if col1 == 0 else self.pref[row2][col1 - 1]
        ans -= 0 if row1 == 0 else self.pref[row1 - 1][col2]
        ans += 0 if not (row1 != 0 and col1 != 0) else self.pref[row1 - 1][col1 - 1]

        return ans


# Your NumMatrix object will be instantiated and called as such:
# obj = NumMatrix(matrix)
# param_1 = obj.sumRegion(row1,col1,row2,col2)
#6 9 11
#8 11 14
#
#
