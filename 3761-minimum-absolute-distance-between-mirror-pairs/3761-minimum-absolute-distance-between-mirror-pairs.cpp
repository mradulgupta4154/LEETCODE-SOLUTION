class Solution {
public:
    int reverse(int x) {
        int rev = 0;
        while (x > 0) {
            rev = rev * 10 + x % 10;
            x /= 10;
        }
        return rev;
    }

    int minMirrorPairDistance(vector<int>& a) {
        unordered_map<int, int> m;
        int n = a.size(), ans = 1e6;

        for (int i = 0; i < n; i++) {
            if (m.count(a[i])) {
                ans = min(ans, i - m[a[i]]);
            }
            m[reverse(a[i])] = i;
        }
        return ans == 1e6 ? -1 : ans;
    }
};