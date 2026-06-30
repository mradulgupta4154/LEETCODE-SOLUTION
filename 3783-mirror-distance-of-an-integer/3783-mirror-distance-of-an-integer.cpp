class Solution {
public:
    int mirrorDistance(int n) {
        int o =n;
        int q = 0 ;
        while(n!=0){
            int d=n%10;
            n/=10;
            q=q*10 + d;
        }
        return abs(o-q);
        
    }
};