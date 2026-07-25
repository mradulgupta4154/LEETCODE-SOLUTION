class Solution {
public:
    int maxProduct(int n) {
        string c=to_string(n);
        sort(c.begin(),c.end());
        return (c[c.length()-1]-'0')*(c[c.length()-2]-'0');        
        
    }
};