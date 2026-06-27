class Solution {
public:
    int maximumGap(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int maxi = 0; 

        for (int i = 1 ; i<nums.size();i++){
            int diff = 0 ;
            diff=nums[i]-nums[i-1];
            maxi=max(diff,maxi);

        }
        return maxi;
        
    }
};