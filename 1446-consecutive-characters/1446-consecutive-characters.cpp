class Solution {
public:
    int maxPower(string s) {
        int c=1,d=1;
        for(int i=0;i<s.length()-1;i++){
            if(s[i]==s[i+1]) d++;
            else{
               d=1;
            }
            c=max(c,d);
        }
        return c;
        
    }
};