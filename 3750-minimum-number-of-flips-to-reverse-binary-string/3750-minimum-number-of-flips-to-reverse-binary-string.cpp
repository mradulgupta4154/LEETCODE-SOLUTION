class Solution {
public:
    int minimumFlips(int n) {
        string c="";
        while(n>0){
            int d=n%2;
            c+=to_string(d);
            n/=2;
        }
        string d=c;
        int count=0;
        reverse(d.begin(),d.end());
        for(int i = 0 ;i<d.size();i++){
            if(d[i]!=c[i]) count++;
        }
        return count;

        
    }
};