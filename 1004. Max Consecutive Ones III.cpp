class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int ans = 0,lp = 0, up = 0, size = nums.size();
        int i = 0, count = 0, j = k;
        if(k == 0){
            while((i < size)){
                if(nums[i] == 1){count++;}
                else {
                    if(count > ans){ ans = count;}
                    count = 0;
                }
                i++;
            }
            if(count > ans){ ans = count;}
            cout << count << " ";
            return ans;
        }
        while(i < size && (nums[i] != 0 || j > 0)){
            if(nums[i] == 1){count++; up = i;}
            else {
                if(j > 0){count++; up = i; j--;}
            }
            i++;
        }
        lp++;
        ans = count;
        while(lp < size){
            if(nums[lp - 1] == 1){count--;}
            else{count--; 
            if(k != 0) j++;}
            i = up + 1;
            while((i < size) && (nums[i] != 0 || j > 0)){
                if(nums[i] == 1){count++;up = i; i++;}
                else{
                    if(j >0){count++; j--;up = i; i++;}
                }
            }
            cout << count << " ";
            if(count > ans){ ans = count;}
            lp++;
        }
        return ans;
    }
};
