class Solution {
public:
    int minimumIndex(vector<int>& capacity, int itemSize) {
        int a=-1;
        int c=INT_MAX;
        for(int i=0;i<capacity.size();i++){
            if(capacity[i]>=itemSize){
                c=min(c,capacity[i]);
            }
        }
        for(int i=0;i<capacity.size();i++){
            if(capacity[i]==c){
                a=i;
                break;
            }
        }
        return a;
    }
};