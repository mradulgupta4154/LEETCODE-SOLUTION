class Solution {
public:
    bool carPooling(vector<vector<int>>& trips, int capacity) {
        vector<int>diff(1001,0);
        for(int i = 0 ; i<trips.size();i++){
            int passengers=trips[i][0];
            int from=trips[i][1];
            int to = trips[i][2];
            diff[from]+=passengers;
            diff[to]-=passengers;
        }
        int sum = 0 ;
        for(int i = 0 ;i<=1000;i++){
            sum+=diff[i];
            if(sum>capacity){
                return false;
            }
        }
        return true;
        
    }
};