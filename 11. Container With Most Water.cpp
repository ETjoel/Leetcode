class Solution {
public:
    int maxArea(vector<int>& height) {
        int i = 0, j = height.size() - 1, water;
        int largest = 0;
        while(i < j){
            water = (j - i) * min(height[i], height[j]);
            if(largest < water){
                largest = water;
            }
            if(height[i] <= height[j]) i++;
            else j--;
        }
        return largest;
    }
};
