class Solution {
public:
    bool hasAlternatingBits(int n) {
        string a="";
        while(n>0){
            int d=n%2;
            a+=to_string(d);
            n/=2;
        }        
        reverse(a.begin(),a.end());
        for(int i=0;i<a.length()-1;i++){
            if(a[i]==a[i+1]) return false;
        }
        return true;
    }
};