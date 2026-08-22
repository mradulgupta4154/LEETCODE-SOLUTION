#include <iostream>
using namespace std;
class Solution {
public:
    bool isPalindrome(int x) {
        if (x<0) return false;
        int orignal=x;
        long long number=0;

        while (x!=0){
            int r=x%10;
            number =number*10+r;
            x/=10;
        }
        return (orignal==number);
    }

};