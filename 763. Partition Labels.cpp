class Solution {
public:
    vector<int> partitionLabels(string s) {
        int lb = 0, ub = s.find_last_of(s[lb]), blen = 0;
        vector<int> ans;
        while(lb < s.length()){
             if(lb == ub){
                ans.push_back(ub - blen + 1); lb++;
                blen = ub + 1;
                if(lb < s.length())
                ub = s.find_last_of(s[lb]);
            }
            else if(lb < s.length() && s.find_last_of(s[lb]) > ub){
                ub = s.find_last_of(s[lb]);
                lb++;
            }
            else if(lb < s.length() && s.find_last_of(s[lb]) <= ub) lb++;
            
        }
        return ans;
    }
};
