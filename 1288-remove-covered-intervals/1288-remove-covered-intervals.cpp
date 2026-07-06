class Solution {
public:
    int removeCoveredIntervals(vector<vector<int>>& in) {
        sort(in.begin(),in.end());
        for(int i = 0;i<(int)in.size()-1;i++){
            if(in[i][0]<=in[i+1][0] and in[i][1]>=in[i+1][1]){
                in.erase(in.begin()+i+1);
                i--;
            }
            else if(in[i+1][0]<=in[i][0] and in[i+1][1]>=in[i][1]){
                in.erase(in.begin()+i);
                i--;
            }
        }
        return in.size();
        
    }
};