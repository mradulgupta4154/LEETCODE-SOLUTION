class Solution {
public:
    int bitwiseComplement(int n) {
        string c = bitset<32>(n).to_string();

        
        int start = c.find('1');
        if (start == string::npos) return 1; 
        c = c.substr(start);

        string ans = "";
        for (int i = 0; i < c.length(); i++) {
            if (c[i] == '0') ans += '1';
            else ans += '0';
        }
        long u = strtol(ans.c_str(), nullptr, 2);  
        return u;
    }
};