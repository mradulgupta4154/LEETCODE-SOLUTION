class Solution {
public:
    int minRotations(int n, string s) {
        auto cost = [](int a, int b) {
            int d = abs(a - b);
            return min(d, 10 - d);
        };
        int last = s[n - 1] - '0';
        int total = 0, bestGain = 0, prev = 0;
        for (int k = 0; k < n; k++) {
            int cur = s[k] - '0';
            int c = cost(prev, cur);
            total += c;
            bestGain = max(bestGain, c - cost(prev, last));
            prev = cur;
        }
        return total - bestGain;
    }
};