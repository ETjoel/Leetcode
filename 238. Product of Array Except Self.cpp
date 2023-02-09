class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> ans;
        int size = nums.size();
        int preproduct[size], aftproduct[size];
        preproduct[size - 1] = nums[size - 1];
        
        for(int i = size - 2; i >= 0; i--){
            preproduct[i] = nums[i] * preproduct[i + 1];
        }
        aftproduct[0] = nums[0];
        for(int i = 1; i < size; i++){
            aftproduct[i] = nums[i] * aftproduct[i - 1];
        }
        ans.push_back(preproduct[1]);
        for(int i = 1; i < size-1; i++){
            ans.push_back(aftproduct[i-1] * preproduct[i+1]);
        }
        ans.push_back(aftproduct[size - 2]);
        return ans;

    }
};
