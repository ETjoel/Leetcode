class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int lp = 0, up = 1;
        while(up < nums.size() ){
            if(nums[lp] == 0){
                if(nums[up] != 0){
                    nums[lp] = nums[up];
                    nums[up] = 0;
                    lp++; up++;
                }
                else up++;
            }
            else {lp++; up++;}
        }
    }
};
