class Solution {
public:
    int xorOperation(int n, int start) {
        int sum = 0 ;
        for (int j = 0 ;j<n;j++){
            sum^=(start+2*j);
        }
        return sum;

        
    }
};