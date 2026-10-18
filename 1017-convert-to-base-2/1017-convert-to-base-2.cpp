class Solution {
public:
    string baseNeg2(int n) {
        if (n == 0) return "0";
        string a = "";
        while (n != 0) {
            int remainder = n % -2;
            n /= -2;
            if (remainder < 0) {
                remainder += 2;
                n += 1;
            }
            a += to_string(remainder);
        }
        reverse(a.begin(),a.end());
        
        return a;
    }
};