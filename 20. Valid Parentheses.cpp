class Solution {
public:
    #include <stack>
    bool reverse(char a, char b){
        if(a == '{' && b == '}')
        return true;
        else if(a == '(' && b == ')')
        return true;
        else if(a == '[' && b == ']')
        return true;
        else return false;
    }
    bool isValid(string s) {
        int size = s.length();
        stack<char> ans;
        ans.push(s[0]);
        for(int i = 1; i < size; i++){
            if(ans.empty()){
                ans.push(s[i]);
                continue;
            }
            if(reverse((ans.top()), s[i])){
                ans.pop();
                continue;
            }
            ans.push(s[i]);
        }
        if(ans.empty()){
            return true;
        }
        else return false;
    }
};
