class Solution {
public:
    int multiply(int n){
        int t=n;
        int a=1;
        while(t>0){
            int d=t%10;
            a*=d;
            t/=10;
        }
        return a;
    }
    int smallestNumber(int n, int t) {
        while(true){
            int c=multiply(n);
            if(c%t==0){
               return n;
            }
            n++;
        }
    }
};