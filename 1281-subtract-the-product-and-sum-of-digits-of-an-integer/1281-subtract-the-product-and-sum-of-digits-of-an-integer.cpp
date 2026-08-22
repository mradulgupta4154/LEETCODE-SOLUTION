class Solution {
public:
    int subtractProductAndSum(int n) {
        int m=1;
        int s=0;
        while(n>0){
            int digit=n%10;
            n/=10;
            m*=digit;
            s+=digit;
        }
       return m-s;
    }
};