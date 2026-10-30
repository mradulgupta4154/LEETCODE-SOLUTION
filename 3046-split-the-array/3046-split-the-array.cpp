class Solution {
public:
    bool isPossibleToSplit(vector<int>& nums) {
        unordered_map<int,int>m;
        if(nums.size()%2!=0) return false;
        for(int i:nums){
            m[i]++;
        }
        bool is=true;
        for(auto&[num,count]:m){
            if(count>2) is=false;
        }
        return is;
        
    }
};