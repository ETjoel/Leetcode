class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int size = nums.size();
        int PI[size];
        PI[0] = nums[0];
        for(int i = 1; i < size; i++){
            PI[i] = PI[i - 1] + nums[i];
        }
        int bPI = 0, aPI = 0, index = -1;
        for(int i = 0; i< size; i++){
            if(i != 0) bPI = PI[i - 1];
            cout << bPI << " ";
            if(i != size - 1) aPI = PI[size - 1] - PI[i];
            else aPI = 0;
            cout << aPI  ;
            if(bPI == aPI) {index = i; break;}
            cout << endl;
        }
        return index;
    }
};
