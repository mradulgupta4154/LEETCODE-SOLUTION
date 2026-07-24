class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int>negative;
        vector<int>positive;
        vector<int>ans(nums.size());
        for(int i =0;i<nums.size();i++){
            if(nums[i]<0) negative.push_back(nums[i]);
            else positive.push_back(nums[i]);
        }
        int pos=0,neg=0;
        for(int i = 0 ;i<nums.size();i++){
            if(i%2==0){
                ans[i]=positive[neg++];
            }
            else{
                ans[i]=negative[pos++];
            }
        }
        return ans;
    }
};