class Solution {
public:
    bool checkPowersOfThree(int n) {
        int og=n;
        while(og>0){
            if(og%3!=0 and og%3!=1){
                return false;
            }
            og/=3;
        }
        return true;
        
    }
};