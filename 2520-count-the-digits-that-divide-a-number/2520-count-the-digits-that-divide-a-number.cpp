class Solution {
public:
    int countDigits(int num) {
        int og=num;
        int count = 0;
        if(num<10) count =1;
        else {
            while(num>0){
                int d = num%10;
                if (og%d==0){
                    count++;
                }
                num/=10;
            }
        }
        return count;
        
    }
};