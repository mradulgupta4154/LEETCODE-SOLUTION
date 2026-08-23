class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        int c=*max_element(nums.begin(),nums.end());
        bool istrue=true;
        int b=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==c) {
                b=i;
                continue;
            }
            if(c<nums[i]*2) istrue=false;
        }
        if(istrue) return b;
        return -1;
    }
};