class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int size = nums.size(), count = 0;
        int PI[size];
        PI[0] = nums[0];
        for(int i = 1; i< size; i++){
            PI[i] = PI[i - 1] + nums[i];
        }
        for(int i = 0; i < size ; i++){
            if(PI[i] == k) count++;
                for(int j = i + 1; j < size; j++){
                    if(PI[j] - PI[i] == k){
                        count++;
                    }
                }
        }
        return count;

    }
};
