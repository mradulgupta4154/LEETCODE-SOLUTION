class Solution {
public:
    int countSymmetricIntegers(int low, int high) {
        int count=0;
        for(int i = low ; i<=high;i++){
            string n=to_string(i);
            if(n.size()%2==0){
                int  mid=n.size()/2;
                int lsum=0 , rsum=0;
                for(int i = 0 ;i<mid;i++) lsum+=n[i]-'0';
                for(int i = mid ;i<n.size();i++) rsum+=n[i]-'0';
                if(lsum==rsum) count++;

            }

        }
        return count;
        
    }
};