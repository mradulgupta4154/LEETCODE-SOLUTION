class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        map<int,string,greater<int>>m;
        vector<string>vec;
        for(int i = 0 ;i<names.size();i++){
            m[heights[i]]=names[i];
        }
        for(auto const& pair : m){
            vec.push_back(pair.second);
        }
        return vec;
    }
};