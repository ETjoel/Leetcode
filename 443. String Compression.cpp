class Solution {
public:
    int compress(vector<char>& chars) {
        int lp = 0, up = 0, count = 0, cen = 0, index = 0;
        vector<char> ans;
        while(up <= chars.size()){
            if(up < chars.size() && chars[lp] == chars[up]){
                cen++; 
                up++;
            }
            else if(up <= chars.size() || chars[lp] != chars[up]){
                if(cen > 1){
                    string temp = to_string(cen);
                    count += temp.length() + 1;
                    ans.push_back(chars[lp]);
                    for(int i = 0; i < temp.length(); i++){
                        ans.push_back(temp[i]);
                    }
                }
                else if( cen > 0){
                    count++;
                    ans.push_back(chars[lp]);
                }
                cen = 0;
                lp = up;
                if(up == chars.size()) break;
            }
        }
        chars = ans;
        return count;
    }
};
