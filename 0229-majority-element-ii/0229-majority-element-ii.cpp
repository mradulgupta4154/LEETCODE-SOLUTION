class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        unordered_map<int,int>m;
        int n =nums.size();
        for(int num:nums) m[num]++;
        vector<int>vec;
        for(auto&[key,count]:m){
            if(count>n/3){
                vec.push_back(key);
            }
        }
        return vec;

        
    }
};