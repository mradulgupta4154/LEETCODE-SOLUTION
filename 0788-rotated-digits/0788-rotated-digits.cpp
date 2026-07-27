class Solution {
public:
    int rotatedDigits(int n) {
        int count=0;
        for(int i =1;i<=n;i++){
            bool g=false;
            bool in=false;
            string c=to_string(i);
            for(int j=0;j<c.length();j++){
                if(c[j]=='3' or c[j]=='4' or c[j]=='7'){
                    in=true;
                    break;
                }
                if(c[j]=='2' or c[j]=='5' or c[j]=='6' or c[j]=='9'){
                    g=true;
                }
                
            }
            if(!in && g)count++;
        }
        return count;
    }
};