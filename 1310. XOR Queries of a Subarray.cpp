class Solution {
public:
    vector<int> xorQueries(vector<int>& arr, vector<vector<int>>& queries) {
    vector<int> prefSum, output;
    int size = arr.size(), sum = 0;
    for(int i = 0; i<size; i++){
        prefSum.push_back(sum ^ arr[i]);
        sum = sum ^ arr[i];
    }
    int a, b;
    for(int i = 0; i < queries.size(); i++){
        a= queries[i][0]; b = queries[i][1];
        if(a > 0){
            output.push_back(prefSum[b] ^ prefSum[a - 1]);
        }
        else output.push_back(prefSum[b]);
    }
    return output;
    }
};
