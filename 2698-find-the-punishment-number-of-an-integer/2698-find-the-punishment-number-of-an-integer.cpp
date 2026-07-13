class Solution {
public:
    bool check(string s, int target) {
        if (target == 0 && s.empty()) return true;
        if (target < 0) return false;
        for (int len = 1; len <= s.size(); len++) {
            int part = stoi(s.substr(0, len));
            if (check(s.substr(len), target - part)) return true;
        }
        return false;
    }

    int punishmentNumber(int n) {
        int tsum = 0;
        for (int i = 1; i <= n; i++) {
            int c = i;
            int e = i * i;
            if (check(to_string(e), c)) {
                tsum += c * c;
            }
        }
        return tsum;
    }
};