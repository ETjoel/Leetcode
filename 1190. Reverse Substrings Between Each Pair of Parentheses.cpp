class Solution {
public:
    string reverseParentheses(string s) {
        int len = s.length();
        stack<pair<char, int> > a;
        string temp = "";
        int i = 0;
        for(int i=0; i < len; i++){
            if(a.empty()){
                if(s[i] == '(') a.push({'(', i});
            }
            else {
                if(s[i] == ')'){   
                    reverse(s.begin() + a.top().second, s.begin() + i + 1);
                    a.pop(); 
                }
                else if(s[i] == '('){
                    a.push({'(', i});
                }
            }
        }
        for(int i = 0; i < len; i++){
            if(s[i] >= 'a' && s[i] <= 'z'){
                temp += s[i];
            }
        }
        return temp;
    }
};
