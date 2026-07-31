class Solution {
public:
    string convertToBase7(int num) {
        string ans="";
        if(num==0) return "0";
        if(num>0){
            while (num>0){
                int d =num%7;
                ans+=('0'+d);
                num/=7;
            }
            reverse(ans.begin(),ans.end());
            return ans;
        }
        else{
            int e=abs(num);
            while (e>0){
                int d =e%7;
                ans+=('0'+d);
                e/=7;
            }
            ans=ans+'-';
            reverse(ans.begin(),ans.end());
            return ans;
        }
        return "1";
        
        
    }
};