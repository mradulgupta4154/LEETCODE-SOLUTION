class Solution {
public:
    int reverseDegree(string s) {
        int sum = 0 ;
        for (int i = 1 ; i<=s.length(); i++){
            char ch = s[i-1];
            int d=123-ch;
            sum+=d*i;

        }
        return sum;
    }
};