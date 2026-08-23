class Solution {
public:
    int minimumCost(vector<int>& nums, int k) {
        const long long mod=1000000007;
        long long av=k;
        long long op=0;
        long long totalcost=0;
        for(int val : nums){
            long long x=val;
            if(av<x){
                long long diff=x-av;
                long long n =(diff+k-1)/k;
                __int128 s=(__int128)n*(2*op+n+1)/2;
                totalcost=(long long)(s%mod+totalcost)%mod;
                op+=n;
                av+=n*(long long)k;
                
                
            }
            av-=x;
        }
        return (int)(totalcost%mod);
        
    }
};