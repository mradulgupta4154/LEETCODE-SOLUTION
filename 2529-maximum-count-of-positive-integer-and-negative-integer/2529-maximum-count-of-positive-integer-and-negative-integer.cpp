class Solution {
public:
    int maximumCount(vector<int>& nums) {
        int i=0,p=0,n=0;
        while(i!=nums.size()){
            if(nums[i]>0) p++;
            else if(nums[i]<0) n++;
            i++;
        }
        return max(p,n);
    }

};