class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        int n =nums.size();
        sort(nums.begin(),nums.end());
        return max(nums[n-2]*nums[n-3]*nums[n-1],nums.front()*nums.back()*nums[1]);
        
    }
};