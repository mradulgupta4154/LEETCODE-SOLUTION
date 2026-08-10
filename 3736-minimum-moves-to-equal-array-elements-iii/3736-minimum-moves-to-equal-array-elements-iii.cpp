class Solution {
public:
    int minMoves(vector<int>& nums) {
        int c=*max_element(nums.begin(),nums.end());
        int ans=0;
        for(int i=0;i<nums.size();i++){
            ans+=(c-nums[i]);
        }
        return ans;
        
    }
};