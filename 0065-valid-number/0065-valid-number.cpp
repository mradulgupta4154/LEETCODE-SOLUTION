class Solution {
public:
    bool isNumber(string s) {
        int count1= 0;
        bool digit=false , hase = false;
        for(int i = 0 ; i<s.length();i++){
            if(s[i]=='e' or s[i]=='E'){
                if(hase || !digit) return false;
                hase =true;
                i++;
                if(i>=s.length()) return false;
                if(s[i]=='+' or s[i]=='-') i++;
                if(i>=s.length()) return false;
                for(;i<s.length();i++){
                    if ((s[i]>='0' and s[i]<='9')) continue;
                    return false;   
                }
                return true;
            }
            if((s[i]>='a' and s[i]<='z') or (s[i]>='A' and s[i]<='Z')) return false;
            if ((s[i]>='0' and s[i]<='9')) {
                digit=true;
            }
            else if(s[i]=='.'){
                count1++;
                if(count1>1) return false;
            }
            else if (s[i]== '+' or  s[i]=='-') {
               if (i!=0) return false;
            }
            else return false;

            


        }
        return digit;
    }
};