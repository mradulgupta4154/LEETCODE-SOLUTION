class Solution {
public:
    int minimumOneBitOperations(int n) {
        int r = 0;
        while (n) {
            r ^= n;
            n >>= 1;
        }
        return r;
    }
};