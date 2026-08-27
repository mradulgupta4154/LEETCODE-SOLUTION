class Solution {
public:
    char processStr(string s, long long k) {
        int n = s.length();
        vector<long long> len(n, 0);
        long long current_len = 0;

        // Forward pass: Track length at each step
        for (int i = 0; i < n; i++) {
            if (s[i] == '#') {
                current_len *= 2;
            } else if (s[i] == '%') {
                // length remains unchanged
            } else if (s[i] == '*') {
                if (current_len > 0) current_len--;
            } else {
                current_len++;
            }
            len[i] = current_len;
        }

        // Out of bounds check
        if (k < 0 || k >= current_len) {
            return '.';
        }

        // Backward pass: Trace position of k
        for (int i = n - 1; i >= 0; i--) {
            long long prev_len = (i > 0) ? len[i - 1] : 0;

            if (s[i] == '#') {
                k %= prev_len;
            } else if (s[i] == '%') {
                k = len[i] - 1 - k;
            } else if (s[i] == '*') {
                // Character removed was at index prev_len - 1
                // k is unaffected as it points to a remaining character
            } else { // Lowercase letter
                if (k == len[i] - 1) {
                    return s[i];
                }
            }
        }

        return '.';
    }
};