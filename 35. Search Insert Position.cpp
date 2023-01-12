class Solution {
public:
    int BinarySearch(vector<int> nums, int l, int h, int target){
        int mid = (h + l)/2;
        if(l <= h)
        {if(l == h){
            if(nums[l] == target){return l;}
            else if(nums[l] < target){ return l+1; }
            else {if(l == 0) return 0;
                  else {if(nums[l-1] < target) return l;
                        else return --l;
                    }}}
        else {  
                if(nums[mid] == target) return mid;
                else if (nums[mid] < target){
                   return  BinarySearch(nums, mid+1, h, target);
                }
                else {
                    if(mid == 0){
                        if(nums[mid] < target){ return ++mid; }
                        else  return 0;}
                    return BinarySearch(nums,l, mid-1, target);}

        }}
        else {if(l == 0) return 0;
                  else {if(nums[l-1] < target) return l;
                        else return --l;
                    }}
    }
    int searchInsert(vector<int>& nums, int target) {
        int l = 0, h = nums.size() - 1;
        return BinarySearch(nums, l, h, target);
    }
};
