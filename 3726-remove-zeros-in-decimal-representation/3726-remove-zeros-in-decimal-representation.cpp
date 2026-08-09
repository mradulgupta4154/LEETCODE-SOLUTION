class Solution {
public:
    long long removeZeros(long long n) {
        string c=to_string(n);
        string s="";
        for(int i=0;i<c.length();i++){
            if(c[i]=='0') continue;
            else s+=c[i];
        }
        return std::stoll(s);
        
    }
};