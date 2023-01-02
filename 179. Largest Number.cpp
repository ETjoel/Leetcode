class Solution {
public:
    void swap(int& a, int& b){
        int temp = a;
        a = b;
        b = temp;
    }
    bool greater_t_100(int a, int b){
    long i=a, j=b, ci= 0 , cj =0;
    bool not_suitable;
    while(a > 0){
    a = a/10;ci++;}
    while(b > 0){
    b = b/10;cj++;}
    if(i == 0 || j == 0)
    {if(i == 0){
        ci = 1;
    }
    else if(j == 0) cj =0;}
    long pi = pow(10, (cj)), pj = pow(10, ci);
    long sum ;
    sum= (i * pi) + j;
    if(sum < (j * pj) + i){
        not_suitable = 0;}
    else not_suitable = 1;
    return not_suitable;
} 
    string largestNumber(vector<int>& nums) {
        string output, temp;
        int size = nums.size(), a[size], zero_count = 0;
        
        for(int i = 0; i < size; i++){
            a[i] = nums[i];
        }
        for(int i = 0; i < size-1; i++){
            for(int j = i+1; j< size; j++){
                if(! greater_t_100(a[i], a[j])){
                    swap(a[i], a[j]);
                }

            }
            if(a[i] == 0){
                zero_count++;
            }
            temp = to_string(a[i]);
            output += temp;
            temp.clear();
        }
        if(zero_count > 0){
            temp = to_string(a[size - 1]);
            output += temp;
            temp.clear();
            int test = stoi(output);
            output.clear();
            output = to_string(test); 
        }
        else{
            temp = to_string(a[size - 1]);
            output += temp;
        }
        return output;
    }
};
