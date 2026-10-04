class Solution {
public:
    int minRotations(string s) {
        int a = 0, prev = 0;
        for (char c : s) {
            int cur = c - '0';
            int d = abs(cur - prev);
            a += min(d, 10 - d);
            prev = cur;
        }
        return a;
    }
};