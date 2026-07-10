class Solution {
public:
    bool sorted(vector<int>& nums){
        for(int i = 0 ; i<nums.size()-1;i++){
            if (nums[i]>nums[i+1]) return false;
        }
        return true;
    }
    int minimumPairRemoval(vector<int>& nums) {
        int count = 0;

        while(!sorted(nums)){
            int idx = 0;
            int mini=INT_MAX;
            for(int i = 0 ;i<nums.size()-1;i++){
                int sum =0;
                sum=nums[i]+nums[i+1];
                if(sum<mini){
                mini = sum;
                idx=i;
                }
            }
           
            nums.erase(nums.begin()+idx,nums.begin()+idx+2);
            nums.insert(nums.begin()+idx,mini);
            count++;
        }
        return count;
        
    }
};