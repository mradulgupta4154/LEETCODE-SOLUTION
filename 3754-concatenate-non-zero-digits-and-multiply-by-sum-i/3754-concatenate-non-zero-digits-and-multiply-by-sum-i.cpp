class Solution {
public:
    long long sumAndMultiply(int n) {
        string c = "";
        string r = to_string(n);
        long long sum =0;
        for(int i = 0 ;i<r.size();i++){
            if(r[i]=='0') continue;
            else {
                c+=r[i];
                sum+=r[i]-'0';
            }
        }
        long long num=c.empty()?0:stoll(c);
        return num*sum;        
    }
};