class Solution {
public:
    string hex(int n){
        string d="";
        while(n>0){
            int f=n%16;
            if(f>9){
                d+=(char)(f+55);
            }
            else{
            d+=to_string(f);
            }
            n/=16;
        }
        reverse(d.begin(),d.end());
        return d;
    }
    string hext(int n){
        string d="";
        while(n>0){
            int f=n%36;
            if(f>9){
                d+=(char)(f+55);
            }
            else{
            d+=to_string(f);
            }
            n/=36;
        }
        reverse(d.begin(),d.end());
        return d;
    }
    string concatHex36(int n) {
        string c=hex(n*n);
        string d=hext(n*n*n);
        return c+d;
        
    }
};