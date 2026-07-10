class Solution {
public:
    int triangularSum(vector<int>& nums) {
        while(nums.size()!=1){
            int sum =0;
            vector<int>next;
            for(int i = 0 ;i<nums.size()-1;i++){
                sum=(nums[i]+nums[i+1])%10;
                next.push_back(sum);
            }
            nums=next;
        }
        return nums[0];
        
    }
};