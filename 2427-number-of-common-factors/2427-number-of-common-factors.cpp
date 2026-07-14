class Solution {
public:
    int commonFactors(int a, int b) {
        if (b>a) {
            swap(a,b);
        }
        int count =0;
        for(int i =1 ; i<=b;i++){
            if(a%i==0 and b%i==0) count++;
        }
        return count;
        
    }
};