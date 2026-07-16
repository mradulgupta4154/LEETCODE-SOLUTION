class Solution {
public:
    bool validDigit(int n, int x) {
        string c = to_string(n);
        if(c[0]-'0'==x) return false;
        if(c.find(x + '0') == string::npos) return false;
        return true;

        
    }
};