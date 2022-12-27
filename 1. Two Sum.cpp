class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        vector<int> soln;
        for(int i = 0; i < (nums.size()); i++){
            for(int j = (i + 1); j < nums.size(); j++){
                if(target == (nums[i] + nums[j])){
                    soln.push_back(i);
                    soln.push_back(j);
                    
                }
            }
        }
        return soln; 
    }
};
