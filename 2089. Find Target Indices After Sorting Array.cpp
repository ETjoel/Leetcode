class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
        vector<int> a;
        int size = nums.size(), t;
        int temp[size];
        
        for(int i = 0; i < size; i++){
            temp[i] = nums[i];
        }
        for(int i = 1; i < size; i++){
            for(int j = i; j > 0; j--){
                if(temp[j] < temp[j-1]){
                    t = temp[j];
                    temp[j] = temp[j-1];
                    temp[j-1] = t;
                }
            }
        }
        for(int i = 0; i < size; i++){
            if(temp[i] == target){
                a.push_back(i);
            }
        }
        return a;
    }
};
