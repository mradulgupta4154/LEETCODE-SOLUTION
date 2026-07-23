class Solution {
public:
    int minCost(string colors, vector<int>& n) {
        int cost=0;
        for(int i =1;i<colors.length();i++){
            if(colors[i-1]==colors[i]){
                cost+=min(n[i-1],n[i]);
                n[i]=max(n[i-1],n[i]);
            }
        }
        return cost;
    }
};