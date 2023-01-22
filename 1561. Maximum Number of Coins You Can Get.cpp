class Solution {
public:
    int maxCoins(vector<int>& piles) {
        int ans = 0, size = piles.size()/3;
        sort(piles.begin(), piles.end());
        for(int i = 1, j = piles.size() - 2; i <= size; i++, j -= 2){
            ans += piles[j];
        }
        return ans;
        
    }
};
