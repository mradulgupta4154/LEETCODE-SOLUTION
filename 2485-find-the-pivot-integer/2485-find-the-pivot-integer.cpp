class Solution {
public:
    int pivotInteger(int n) {
        int pivot = 1;
        bool found =false;
        for (int i = 1 ; i<=n ;i++ ){
            int psum=0 , sum=0;
            for(int j = 1 ; j<=pivot;j++) psum+=j;
            for(int j = pivot ;j<=n;j++) sum+=j;

            if(psum==sum) { 
                found=true;
                break;
            }
            else pivot++;
        }
        if(found) return pivot;
        return -1;
        
    }
};