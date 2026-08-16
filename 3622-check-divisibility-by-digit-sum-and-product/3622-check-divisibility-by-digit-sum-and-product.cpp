class Solution {
public:
    bool checkDivisibility(int n) {
        int c=n;
        int s=0,m=1;
        while(c>0){
            int d=c%10;
            s+=d;
            m*=d;
            c/=10;
        }
        if(n%(s+m)==0) return true;
        return false;
        
    }
};