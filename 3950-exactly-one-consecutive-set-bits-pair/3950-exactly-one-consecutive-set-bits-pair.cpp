class Solution {
public:
    string itob(int n ){
        string ans="";
        while(n>0){
            int d=n%2;
            ans+=to_string(d);
            n/=2;
        }
        return ans;
    }
    bool consecutiveSetBits(int n) {
        string c=itob(n);
        bool istrue=false;
        int count=0;
        if(c.length()<=1) return false;
        for(int i=0;i<c.length()-1;i++){
            if(c[i]=='1' and c[i+1]=='1') {
                istrue=true;
                count++;
            }
        }
        if(count==1 and istrue) return true;
        return false;
        
    }
};