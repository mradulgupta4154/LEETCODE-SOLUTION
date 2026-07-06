class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        int sum = 0;
        int dsum=0;
        for(int i = 0 ;i<nums.size();i++){
            sum+=nums[i];
            while(nums[i]>0){
                int d =nums[i]%10;
                dsum+=d;
                nums[i]/=10;
            }
        }
        return abs(dsum-sum);
        
    }
};