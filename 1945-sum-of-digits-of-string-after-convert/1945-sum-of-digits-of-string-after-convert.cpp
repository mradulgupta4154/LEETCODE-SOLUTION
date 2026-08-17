class Solution {
public:
    int summer(int a){
        int ans=0;
        while(a>0){
            int d=a%10;
            ans+=d;
            a/=10;
        }
        return ans;
    }
    int getLucky(string s, int k) {
        string ans="";
        for(int i=0;i<s.length();i++){
            ans+=to_string((int)(s[i]-'a'+1));
        }
        int a=0;
        for(char c:ans){
            a+=c-'0';
        }
        k--;
        while(k--){
            a=summer(a);
        }
        return a;
    }
};