class Solution {
public:
    int findNonMinOrMax(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n= nums.size()-1;
        for(int i = 0 ; i<nums.size();i++){
            if(nums[0]<nums[i] and nums[i]<nums[n]){
                return nums[i];
            }
        }
        return -1;
        
    }
};