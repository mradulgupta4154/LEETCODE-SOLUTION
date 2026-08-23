class Solution {
public:
    int largestInteger(int n, int s) {
        for(int i =pow(10,n)-1;i>=0;i--){
            int a=i;
            int sum =0;
            while(a>0){
                int d=a%10;
                sum+=d;
                a/=10;
            }
            if (sum==s){
                return i;
            }
        }
        return -1;
            
        
    }
};