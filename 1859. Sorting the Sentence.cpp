class Solution {
public:
    
    string sortSentence(string s) {
        int i = 0, index, countWord=0;
        vector<char> temp;
        char ans[10][201];
        string tans;
        while(i < s.length()){
            if(isdigit(s[i])){
                index = stoi(s.substr(i, 1));
                i += 2; countWord++;
                for(int j = 0; j < temp.size(); j++){
                    ans[index][j] = temp[j];
                
                }
                ans[index][temp.size()] = '\0';
                temp.clear(); 
            }
            else {
                temp.push_back(s[i]);
                i++;
            }
        }
        for(int i = 1; i < countWord; i++){
            tans = tans + ans[i] + " ";
        }
        tans += ans[countWord];
        return tans;
    }
};
