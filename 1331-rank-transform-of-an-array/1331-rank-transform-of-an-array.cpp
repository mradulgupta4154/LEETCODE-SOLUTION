class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        vector<int>vec=arr;
        vector<int>ans;
        unordered_map<int,int>m;
        sort(vec.begin(),vec.end());
        int rank=1;
        for(int i = 0 ; i<vec.size();i++){
            if(m.find(vec[i])==m.end()){
                m[vec[i]]=rank;
                rank++;
            }
        }
        for(int i =0;i<arr.size();i++){
            ans.push_back(m[arr[i]]);
        }
        return ans;
    }

};