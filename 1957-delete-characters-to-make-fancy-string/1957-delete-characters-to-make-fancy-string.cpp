class Solution {
public:
    string makeFancyString(string s) {
        string r="";
        int count = 1 ;
        r+=s[0];
        for(int i = 1 ; i<s.length() ; i++){
            
            if(s[i]==s[i-1]){
                count++;
            }else{
                count =1;
            }
            if(count<3){
                r+=s[i];
            }
        }
        return r;
        
    }
};