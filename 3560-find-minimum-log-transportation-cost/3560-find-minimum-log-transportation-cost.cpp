class Solution {
public:
    long long minCuttingCost(int n, int m, int k) {
        long long x = 0;
        if(n>k)
            x += 1LL * pow(k, n/k) * max(1, n - n/k * k);
        if(m>k)
            x += 1LL * pow(k, m/k) * max(1, m - m/k * k);
        return x;
    }
};