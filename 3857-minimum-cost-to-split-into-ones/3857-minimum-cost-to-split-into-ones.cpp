class Solution {
public:
    int minCost(int n) {
        int sum =0;
        if(n<=1) return 0;
        int a=n/2;
        int b =n-a;
        return a*b+minCost(a)+minCost(b);
    }
};