class Solution {
public:
    static bool islarger(string& a, string& b){
        if(a.length() == b.length()) return a > b;
        else return a.length() > b.length();
    }
    
    string kthLargestNumber(vector<string>& nums, int k) {
        int size = nums.size(), ci, count = 0;
        sort(nums.begin(), nums.end(), islarger);
        return nums[k - 1];
    }
};
