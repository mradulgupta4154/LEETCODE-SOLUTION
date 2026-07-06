class Solution {
public:
    bool findSubarrays(vector<int>& nums) {
        vector<int> vec;
        for(int i = 0 ; i<nums.size()-1;i++){
            int sum = 0 ;
            sum=nums[i]+nums[i+1];
            for(int j = 0 ;j<i;j++){
               if(vec[j]==sum) return true;
            }
            vec.push_back(sum);
        }
        return false;
        
    }
};