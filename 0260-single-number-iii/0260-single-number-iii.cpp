class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        vector<int>vec;
        unordered_map<int,int>m;
        for(int i =0;i<nums.size();i++){
            m[nums[i]]++;
        }
        for(auto&[num,count]:m){
            if(count==1) vec.push_back(num);

        }
        return vec;

        
    }
};