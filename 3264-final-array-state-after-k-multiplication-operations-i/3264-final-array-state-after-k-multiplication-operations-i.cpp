class Solution {
public:
    int minValIdx(vector<int>&nums){
        int c=*min_element(nums.begin(),nums.end());
        int idx=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==c){
                idx=i;
                break;
            }
        }
        return idx;
    }
    vector<int> getFinalState(vector<int>& nums, int k, int m) {
        while(k--){
            int c =minValIdx(nums);
            nums[c]*=m;
        }
        return nums;
        
    }
};