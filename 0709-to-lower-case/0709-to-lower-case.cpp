class Solution {
public:
    string toLowerCase(string s) {
        string c="";
        for(int i =0;i<s.length();i++){
            char t=tolower(s[i]);
            c+=t;
        }    
        return c;    
    }
};