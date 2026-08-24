class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int maxi=0,c=0;
        for (int i = 0 ; i<gain.size();i++ ){
            c+=gain[i];
            maxi=max(c,maxi);
        }
        return maxi;
        
    }
};