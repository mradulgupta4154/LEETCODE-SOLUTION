class Solution {
public:
    int minimumCost(vector<int>& cost) {
        sort(cost.rbegin(),cost.rend());
        int c=0;
        int i;
        int j=2;
        for(i=0;i<cost.size();i++){
            if(i==j){
                j+=3;
                continue;     
            }
            else{
                c+=cost[i];
            }
        }
        return c;
    }
};