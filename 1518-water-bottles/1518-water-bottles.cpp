class Solution {
public:
    int numWaterBottles(int n, int e) {
        int sum=n;
        while(n>=e){
            int d=n%e;
            n/=e;
            sum+=n;
            n+=d;
        }
        return sum;
        
    }
};