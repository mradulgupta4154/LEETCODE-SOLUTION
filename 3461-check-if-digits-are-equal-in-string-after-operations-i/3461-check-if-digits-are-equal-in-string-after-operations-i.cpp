class Solution {
public:
    bool hasSameDigits(string s) {
        while(s.length()>2){
            string next;
            for(int i = 0 ;i<s.length()-1;i++){
                int d=(s[i]-'0'+s[i+1]-'0')%10; 
                next+=char('0'+d);
            }
            s=next;
            
        }
        return (s[0]==s[1]);
        
    }
};