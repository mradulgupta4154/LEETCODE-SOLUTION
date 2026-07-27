class Solution {
public:
    int sumOfFlooredPairs(vector<int>& nums) {
        long long sum =0;
        long long mod=1e9+7;
        sort(nums.begin(),nums.end());
        for(int i =0;i<nums.size();){
            long j=i+1;
            while(j<nums.size() and nums[j]==nums[j-1]) ++j;
            long d =j-i;
            sum=(sum+d*d%mod)%mod;
            while(j<nums.size()){
                long div=nums[j]/nums[i] , bound=nums[i]*(div+1);
                long next=lower_bound(nums.begin()+j,nums.end(),bound)-nums.begin();
                sum = (sum + (next - j) * div % mod * d % mod) % mod;
                j = next;
            }
            i+=d;
        }
        return sum;
        
    }
};