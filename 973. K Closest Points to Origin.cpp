class Solution {
public:
    void swap(int& a, int& b){
        int temp = a;
        a = b;
        b = temp;
    }
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        int dis, least, size = points.size(), count = 0;
        vector<vector<int> > a;
        vector<int> v;
        int d[size][2];
        for(int i = 0; i < size; i++){
            for(int j = 0; j < 2; j++){
                d[i][j] = points[i][j];
            }
        }
         for(int i = 0; i < k; i++){
             dis = pow((d[i][0]), 2) + pow((d[i][1]), 2);
             least = dis;
             for(int j = i+1; j < size; j++){
                 dis = pow((d[j][0]), 2) + pow((d[j][1]), 2);
                 if(least > dis){
                     least = dis;
                     swap((d[j][0]), (d[i][0]));
                     swap(d[j][1], (d[i][1]));
                 }
             }
                v.push_back(d[i][0]);
                v.push_back(d[i][1]);
                a.push_back(v);
                v.clear();
         }
        
        return a;
    }
};
