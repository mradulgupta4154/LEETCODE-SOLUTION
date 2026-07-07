class Solution {
public:
    int sumOfTheDigitsOfHarshadNumber(int x) {
        int sum=0;
        int og = x;
        while (x>0){
            int d = x%10;
            sum+=d;
            x/=10;
        }
        if(og%sum==0) return sum;
        return -1;
        
    }
};