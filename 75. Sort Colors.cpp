class Solution {
public:
    void sortColors(vector<int>& nums) {
        int temp, size = nums.size();
        int a[size];
        for(int i = 0; i < size; i++){
            a[i] = nums[i];
        }
        for(int i = 1; i < size; i++){
            for(int j = i; j > 0; j--){
                if(a[j] < a[j-1]){
                    temp = a[j];
                    a[j] = a[j-1];
                    a[j-1] = temp;
                }
            }
        }
        for(int i = 0; i < size; i++){
            nums[i] = a[i];
        }
    }
};
