class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        int count = 0, size = nums.size();
        sort(nums.begin(), nums.end());
        int i = 0, j = size - 1;
        while(i < j){
            if((nums[i] + nums[j]) == k){
                count++; i++; j--;
            }
            else if((nums[i] + nums[j]) > k){
                j--;
            }
            else i++;
        }
        return count;
    }
};
