class Solution {
public:
    int reverseBits(int n) {
        string c=bitset<32>(n).to_string();
        long long ans=0;
        for(int i=0;i<32;i++){
            ans+=(c[i]-'0')*pow(2,i);
        }
        return ans;
        
    }
};