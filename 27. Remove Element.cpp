class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int count = 0;
        for(int i = 0; i < nums.size()-count; i++){
            if(nums[i] == val){
                for(int j = i; j< nums.size() - 1; j++){
                    nums[j] = nums[j+1];
                }
                count++;i--;
            }
        }
        return nums.size() - count;
    }
};
