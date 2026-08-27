class Solution {
public:
    string smallestPalindrome(string s) {
        int n =s.length();
        string c=s.substr(0,n/2);
        string d=c;
        sort(c.begin(),c.end());
        string ans;
        sort(d.rbegin(),d.rend());
        if(n%2==0){
            ans=c+d;
            
        }
        else{
            ans=c+s.substr(n/2,1)+d;
        }
        return ans;
    }
};