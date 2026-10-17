class Solution {
public:
    string replaceDigits(string s) {
        string c="";
        c+=s[0];
        for(int i=1;i<s.length();i++){
            if(s[i]>='a' and s[i]<='z'){
                c+=s[i];
            }
            else{
                c+=((s[i-1]-'0')+(s[i]-'0')+'0');
            }
        }
        return c;
        
    }
};