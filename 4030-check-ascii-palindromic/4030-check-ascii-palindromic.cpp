class Solution {
public:
    bool isPalindromic(string s) {
        string ans="";
        for(int i=0;i<s.length();i++){
            ans+=bitset<8>(s[i]).to_string();
        }
        string c=ans;
        reverse(c.begin(),c.end());
        return ans==c;
    }
};