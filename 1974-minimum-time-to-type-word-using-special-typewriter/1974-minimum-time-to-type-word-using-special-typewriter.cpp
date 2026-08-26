class Solution {
public:
    int minTimeToType(string word) {
        int ans = 0;
        char prev = 'a';
        for (int i = 0; i < word.length(); i++) {
            int diff = abs(prev - word[i]);
            int moves = min(diff, 26 - diff);
            ans += moves + 1;
            prev = word[i];
        }
        return ans;
    }
};