class NumMatrix {
public:
    vector<vector<int>> temp;
    
    NumMatrix(vector<vector<int>>& matrix) {
        vector<int> temp_pro;
        int column = matrix[0].size();
        int row = matrix.size();
        int sum = 0;
        for(int i = 0; i < row; i++){
            for(int j = 0; j < column; j++){
                sum += matrix[i][j];
                temp_pro.push_back(sum);
            }
            temp.push_back(temp_pro);
            temp_pro.clear();
        }
    }
    
    
    int sumRegion(int row1, int col1, int row2, int col2) {
        int ans = 0;
        int col = temp[0].size() - 1;
        
        if(col1 != 0 ) ans = temp[row2][col2] - temp[row1][col1 - 1];
        else  {
                if(row1 > 0) ans = temp[row2][col2] - temp[row1 -1][col];
                else ans = temp[row2][col2];
        }
        
        for(int i = row2; i > row1; i--){  
            
            if(col1 != 0 ) ans -= (temp[i][col1 - 1] - temp[i - 1][col2]);
            else  {
                if(i - 1 >= 0)  ans -= (temp[i - 1][col] - temp[i - 1][col2]);

            }
        }
        return ans;
    }
};

/**
 * Your NumMatrix object will be instantiated and called as such:
 * NumMatrix* obj = new NumMatrix(matrix);
 * int param_1 = obj->sumRegion(row1,col1,row2,col2);
 */
