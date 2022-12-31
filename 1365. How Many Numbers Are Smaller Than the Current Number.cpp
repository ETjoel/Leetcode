class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        int count, size = nums.size();
        vector<int> ar;
        int a[size];
        for(int i = 0; i < size; i++){
            count = 0;
            for(int j = 0; j < size; j++){
                if(nums[i] > nums[j]){
                    count++;
                }
            }
            a[i] = count;
        }
        for(int i = 0; i < size; i++){
            ar.push_back(a[i]);
        }
        return ar;
    }
};
