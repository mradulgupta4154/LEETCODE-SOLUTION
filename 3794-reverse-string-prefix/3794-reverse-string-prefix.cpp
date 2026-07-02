class Solution {
public:
    string reversePrefix(string s, int k) {
        reverse(s.begin(),s.begin()+min((int)s.size(),k));
        return s;
        
    }
};