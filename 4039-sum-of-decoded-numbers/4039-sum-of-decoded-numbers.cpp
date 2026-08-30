class Solution {
public:
    long long modpow(long long b, long long f, long long mod){
        b %= mod;
        long long result = 1;
        while(f > 0){
            if(f & 1) result = result * b % mod;
            b = b * b % mod;
            f >>= 1;
        }
        return result;
    }

    long long e(long long a){
        long long w=a%10;
        long long d=floor(a/10);
        string c=to_string(d);
        long long b=stoll(c.substr(0,w));
        long long f=stoll(c.substr(w));
        long long mod=1e9+7;
        return modpow(b,f,mod);
        
    }
    int sumDecoded(vector<long long>& nums) {
        long long sum=0;
        long long mod=1e9+7;
        for(int i=0;i<nums.size();i++){
            sum+=e(nums[i])%mod;

        }
        return sum%mod;
        
    }
};