class Solution {
public:
    int monotoneIncreasingDigits(int n) {
        string s = to_string(n);
        int markFrom = s.size();
        
        for (int i = s.size() - 1; i > 0; i--) {
            if (s[i] < s[i-1]) {
                s[i-1]--;
                markFrom = i;
            }
        }
        
        for (int i = markFrom; i < s.size(); i++) {
            s[i] = '9';
        }
        
        return stoi(s);
    }
};