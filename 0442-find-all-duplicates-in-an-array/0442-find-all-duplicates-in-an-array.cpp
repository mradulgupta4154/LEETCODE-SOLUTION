class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        unordered_map<int,int>m;
        for(int i =0;i<nums.size();i++){
            m[nums[i]]++;
        }
        vector<int>vec;
        for(auto&[num,count]:m){
            if(count>1){
                vec.push_back(num);
            }
        }
        return vec;

        
    }
};