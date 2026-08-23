class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int n= nums.size();
        int ans=n;
        for (int i =0 ; i<n;i++){
            if (nums[i]==target){
                ans=i;
            }
            else{
                if (nums[i] < target && i+1 < n && target < nums[i+1]) {                    
                    ans= i+1;
                }
                else if(target<nums[0]){
                    ans=0;
                }
            }
        }
        return ans;
        
    }
};