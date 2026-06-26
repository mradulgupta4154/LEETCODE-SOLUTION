class Solution {
public:
    int clumsy(int n) {
        if (n == 0) return 0;
        if (n == 1) return 1;
        if (n == 2) return 2;
        if (n == 3) return 6;

        // First chunk: n * (n-1) / (n-2) + (n-3)
        int result = n * (n-1) / (n-2) + (n-3);
        n -= 4;

        // Remaining chunks: subtract (n * (n-1) / (n-2)) then add (n-3)
        while (n >= 4) {
            result -= n * (n-1) / (n-2);
            result += (n-3);
            n -= 4;
        }

        // Handle remaining terms
        if (n == 3) result -= n * (n-1) / (n-2);
        else if (n == 2) result -= n * (n-1);
        else if (n == 1) result -= n;

        return result;
    }
};