class Solution {
public:
    string largestGoodInteger(string num) {
        string best = "";

        for (int i = 0; i + 2 < num.length(); i++) {
            if (num[i] == num[i + 1] && num[i] == num[i + 2]) {
                string cur = num.substr(i, 3);
                if (cur > best) {
                    best = cur;
                }
            }
        }
        return best;
    }
};