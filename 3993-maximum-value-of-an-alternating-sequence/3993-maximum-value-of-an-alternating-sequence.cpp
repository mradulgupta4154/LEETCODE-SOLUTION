class Solution {
public:
    long long maximumValue(int n, int s, int m) {
        if(n==1) return s;
        long long k=n-1;
        long long t=(k-1)/2;
        return (long long)s+m+t*(long long)(m-1);

    }
};