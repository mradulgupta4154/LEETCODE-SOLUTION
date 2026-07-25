class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int>m;
        vector<int>ans;
        for(int i =0;i<nums.size();i++){
            m[nums[i]]++;
        }
        vector<pair<int,int>>vec;
        for(auto&[num,count]:m){
            vec.push_back({count,num});
        }
        sort(vec.rbegin(),vec.rend());
        for(int i =0;i<k;i++){
            ans.push_back(vec[i].second);
        }
        return ans;
        
    }
};