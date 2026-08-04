class Solution {
public:
    bool checkRecord(string s) {
        int a=0,l=0;
        for(int i=0;i<s.length();i++){
            if(s[i]=='A') a++;
            if(i+2<s.length() and s[i]=='L' and s[i+1]=='L' and s[i+2]=='L') l++;

        }
        if(a<2 and l==0) return true;
        return false;
        
    }
};