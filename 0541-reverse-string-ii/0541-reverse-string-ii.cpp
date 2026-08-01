class Solution {
public:
    string reverseStr(string s, int k) {
        string ans="";
        for(int i =0;i<s.length();i+=2*k){
            int e= min(i+k,(int)s.length());
            reverse(s.begin()+i,s.begin()+e);
        }
        return s;
        
    }
};