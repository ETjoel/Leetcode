class Solution {
public:
    int isgreater(int a, int b){
        return a >= b ? a : b;
    }
    
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        int size = intervals.size();
        vector<vector<int>> ans;
        for(int j = 1; j < size; j++)
        {for(int i = j; i > 0; i--){
            if(intervals[i][0] < intervals[i-1][0]){
                std::swap(intervals[i], intervals[i-1]);
            }
        }}
        for(int j = 0; j < size; j++){
            cout << "["<<intervals[j][0]<<", "<<intervals[j][1]<<"], ";
        }
        ans.push_back(intervals[0]);
        for(int i = 1, j = 0; i < size; i++){
            if(ans[j][0] >= intervals[i][0]){
                ans[j][0] = intervals[i][0];
                ans[j][1] = isgreater(ans[j][1], intervals[i][1]);
                
            }
            else {
                if(ans[j][1] >= intervals[i][0]){
                    ans[j][1] = isgreater(ans[j][1], intervals[i][1]);
                }
                else {
                    ans.push_back(intervals[i]);
                    j++;
                }
            }
        }
        return ans;
    }
};
