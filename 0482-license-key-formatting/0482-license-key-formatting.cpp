class Solution {
public:
    string licenseKeyFormatting(string s, int k) {
        string ans="";
        string res="";
        for(int i=0;i<s.length();i++){
            if(s[i]=='-') continue;
            else if(s[i]>='a' and s[i]<='z'){
                ans+=toupper(s[i]);
            }
            else{
                ans+=s[i];
            }
        }
        for(int i=ans.length()-k;i>0;i-=k){
            ans.insert(i,"-");
        }
        return ans;

        
    }
};