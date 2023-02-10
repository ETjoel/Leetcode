class Solution {
public:
    vector<int> corpFlightBookings(vector<vector<int>>& bookings, int n) {
        vector<int> ans;
        for(int i = 0; i < n; i++){
            ans.push_back(0);
        }
        for(int i = 0; i < bookings.size(); i++){
            for(int j = bookings[i][0]; j <= bookings[i][1]; j++){
                ans[j-1] += bookings[i][2];
            }

        }
        return ans;
    }
};
