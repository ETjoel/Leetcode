class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        int temp, count = 0, ans = 0;
        std::sort(nums.begin(), nums.end());
        temp = nums[0];
        for(int i = 1; i < nums.size(); i++){
            if(temp == nums[i]){
                 count++;
            }
            else {
                temp = nums[i];
                count = 0;
            }
            ans += count;
        }
        return ans;
    }
};
