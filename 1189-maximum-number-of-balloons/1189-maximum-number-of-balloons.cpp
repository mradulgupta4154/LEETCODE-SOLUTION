class Solution {
public:
    int maxNumberOfBalloons(string text) {
        int textDict[26] = {0};
        int balloonDict[26] = {0};
        string s = "balloon";
        int ans = INT_MAX;

        for (int i = 0; i < text.length(); i++) {
            textDict[text[i] - 'a']++;
        }

        for (int i = 0; i < s.length(); i++) {
            balloonDict[s[i] - 'a']++;
        }

        for (int i = 0; i < s.length(); i++) {
            int index = s[i] - 'a';

            if (textDict[index] > 0) {
                ans = min(ans, textDict[index] / balloonDict[index]);
            } else {
                return 0;
            }
        }

        return ans;
    }
};