class Solution {
public:
    int kthSmallest(vector<vector<int>>& m, int k) {
        vector<int>vec;
        for(int i=0;i<m.size();i++){
            for(int j=0;j<m[0].size();j++){
                vec.push_back(m[i][j]);
            }
        }
        sort(vec.begin(),vec.end());
        return vec[k-1];
        
    }
};