class Solution {
public:
    string itob(int n){
        string ans="";
        while(n>0){
            int d=n%2;
            ans+=to_string(d);
            n/=2;
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
    int btoi(string c){
        int ans=0;
        int j=0;
        for(int i=c.length()-1;i>=0;i--){
            ans+=(c[i]-'0')*pow(2,j);
            j++;
        }
        return ans;
    }
    int findComplement(int num) {
        string c=itob(num);
        string in="";
        for(int i=0;i<c.length();i++){
            in+=to_string((c[i]-'0')^1);
        }
        return btoi(in);

        
    }
};