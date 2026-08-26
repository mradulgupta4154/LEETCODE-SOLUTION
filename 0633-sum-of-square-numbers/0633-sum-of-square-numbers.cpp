class Solution {
public:
    bool judgeSquareSum(int c) {
        int left=0;
        int right=(long long )sqrt(c);
        while(left<=right){
            if((long long )left*left+right*right==c){
                return true;
            }
            else if((long long) left*left+right*right>c){
                right--;
            }
            else{
                left++;
            }
        }
        return false;
        
    }
};