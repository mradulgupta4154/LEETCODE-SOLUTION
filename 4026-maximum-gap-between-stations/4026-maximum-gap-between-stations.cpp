class Solution {
public:
    int maximumGap(string skill, string station) {
        int n = skill.size(), m = station.size();
        if (n == 1) return 0;
        vector<int> earliest(n), latest(n);
        int idx = 0;
        for (int j = 0; j < m && idx < n; j++) {
            if (station[j] == skill[idx]) {
                earliest[idx] = j;
                idx++;
            }
        }
        idx = n - 1;
        for (int j = m - 1; j >= 0 && idx >= 0; j--) {
            if (station[j] == skill[idx]) {
                latest[idx] = j;
                idx--;
            }
        }
        int ans = 0;
        for (int i = 1; i < n; i++) {
            ans = max(ans, latest[i] - earliest[i - 1]);
        }
        return ans;
    }
};