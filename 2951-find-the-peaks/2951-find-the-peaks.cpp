class Solution {
public:
    vector<int> findPeaks(vector<int>& m) {
        vector<int>vec;
        for(int i=1;i<m.size()-1;i++){
            if(m[i]>m[i+1] and m[i]>m[i-1]){
                vec.push_back(i);
            }
        }
        return vec;
        
    }
};