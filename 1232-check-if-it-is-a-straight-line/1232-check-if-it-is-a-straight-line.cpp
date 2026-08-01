class Solution {
public:
    bool line(vector<int>&a,vector<int>&b,vector<int>&c){
        if((c[1]-a[1])*(a[0]-b[0])==(a[1]-b[1])*(c[0]-a[0])) return true;
        return false;
    }
    bool checkStraightLine(vector<vector<int>>& co) {
        for(int i =0;i<co.size()-2;i++){
            if(!line(co[i],co[i+1],co[i+2])) return false;
        }
        return true;        
    }
};