class Solution {
public:
    int alternateDigitSum(int n) {
        string c=to_string(n);
        int sum=0;
        for(int i=0;i<c.length();i++){
            if(i%2==0) sum+=(c[i]-'0');
            else sum-= (c[i]-'0');
        }
        return sum;
    }
};