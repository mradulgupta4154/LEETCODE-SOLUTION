class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int n =nums.size();
        if(n<k){
            return nums[n-1];
        }
        return nums[n-k];
        
    }
};