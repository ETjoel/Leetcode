class Solution {
public:
    vector<bool> checkArithmeticSubarrays(vector<int>& nums, vector<int>& l, vector<int>& r) {
        vector<bool> ans;
        vector<int> temp;
        int m = l.size(), n = nums.size(), ln, rn, d;
        for(int i = 0; i < m; i++){
            ln = l[i];
            rn = r[i];
            for(int j = ln; j <= rn; j++){
                temp.push_back(nums[j]);
            }
            sort(temp.begin(), temp.end());
            /*for(int i = 0; i < temp.size(); i++){
            cout << temp[i] << " ";
        }
        cout << endl;*/
            /*if(temp[temp.size() - 1] == (temp[0] + ((temp[1] - temp[0]) * (temp.size() - 1)))){
                ans.push_back(true);
            }
            else ans.push_back(false);
            temp.clear();
            */
            ans.push_back(true);
            for(int k = 0; k < temp.size() - 1; k++){
                d = temp[1] - temp[0];
                if(temp[k+1] - temp[k] != d) {
                    ans[i] = false; break;
                }
            }
            temp.clear();
        }
        return ans;
    }
};
