class Solution {
public:
    int countGoodSubstrings(string s) {
        int size = s.length(), count= 0;
        char wind_store[3];
        if(size >=3)
        {
            for(int i = 0; i<3; i++){
            wind_store[i] = s[i];
            }
            if(wind_store[0] != wind_store[1] && wind_store[0] != wind_store[2]
                && wind_store[1] != wind_store[2])
            count ++;
            for(int i = 3; i < size ; i++){
                wind_store[0] = wind_store[1];
                wind_store[1] = wind_store[2];
                wind_store[2] = s[i];
                if(wind_store[0] == wind_store[1] || wind_store[0] == wind_store[2]
                || wind_store[1] == wind_store[2]) {continue;}
                count ++;
            }
        }
        return count;
    }
};
