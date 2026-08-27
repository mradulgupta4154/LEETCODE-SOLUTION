class Solution {
public:
    vector<int> maxKDistinct(vector<int>& nums, int k) {
        set<int,greater<int>>s{nums.begin(),nums.end()};
        vector<int>vec;
        auto it=s.begin();
        for(int i=0;i<min(k,(int)s.size());i++){
            vec.push_back(*it);
            it++;
        }
        return vec;
    }
};