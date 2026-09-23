class Solution {
public:
    int maximizeSum(vector<int>& nums, int k) {
        int c=*max_element(nums.begin(),nums.end());
        int ans=0;
        while(k--){
            ans+=c;
            c+=1;
        }
        return ans;
        
    }
};