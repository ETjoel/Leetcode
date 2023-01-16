class Solution {
public:
    bool isoperatore(string a){
    if(a == "+" || a == "-" || a  == "*" || a == "/"){
        return true;
    }
    else return false;
    }   
    int evalRPN(vector<string>& tokens) {
        int a, b, operation;
        stack<int> as;
        for(int i = 0; i < tokens.size(); i++){
            if(isoperatore(tokens[i])){
                a = as.top(); as.pop();
                b = as.top(); as.pop();
                if(tokens[i] == "+"){
                    operation = b+a;
                }
                else if(tokens[i] == "*"){
                    operation = b*a;
                }
                else if(tokens[i] == "/"){
                    operation = b/a;
                }
                else {
                    operation = b-a;
                }
                as.push(operation);
                continue;
            }
            as.push(stoi(tokens[i]));

        }
        return as.top();
    }
};
