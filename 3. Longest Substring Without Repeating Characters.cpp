class Solution {
public:
    bool found(string temp, char a){
        size_t found = temp.find(a);
        if(found != string::npos) return 1;
        else return 0;
    }
    int lengthOfLongestSubstring(string s) {
       int up = 0, lp = 0, max = 0, size = s.length();
       string temp = "";
       temp.push_back(s[lp++]); up = lp;
       while(up <= size){
           if(up < size && !found(temp, s[up])){
               temp.push_back(s[up++]);
           }
           else if(up <= size || found(temp, s[up])){
               if(temp.length() > max){
                   max = temp.length();
               }
               temp.clear(); 
               if(up < size){
                   temp.push_back(s[lp++]); up = lp;
               }
               else break;
           }
       }
        return max;
    }
    
};
