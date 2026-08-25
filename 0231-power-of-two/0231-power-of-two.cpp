class Solution {
public:
    bool isPowerOfTwo(int n) {
        if (n<=0) return false;
        double a = log2(n);
        return (a-(int)a==0);
    }
};