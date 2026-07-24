class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector<int>vec(nums.size(),0);
        for(int i=0;i<nums.size();i++){
            if(i==0) vec[0]=nums[0];
            else{
              vec[i]=nums[i]+vec[i-1];
            }
        }
        return vec;
        
    }
};