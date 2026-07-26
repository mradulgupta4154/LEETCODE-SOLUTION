class Solution {
public:
    int maximumScore(int a, int b, int c) {
        int count=0;
        while((a>0 and b>0) or (b>0 and c>0) or (a>0 and c>0)){
            if(a<=b and a<=c){
                b--;
                c--;
            }
            else if( b<=a and b<=c){
                a--;
                c--;
            }
            else{
                a--;
                b--;
            }
            count++;
        }
        return count;
        
    }
};