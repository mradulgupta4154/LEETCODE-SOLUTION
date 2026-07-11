class Solution {
public:
    bool checkGoodInteger(int n) {
        int dsum=0;
        int sqsum=0;
        while(n>0){
            int d = n%10;
            dsum+=d;
            sqsum+=d*d;
            n/=10;
        }
        if(sqsum-dsum>=50) return true;
        return false;
    }
};