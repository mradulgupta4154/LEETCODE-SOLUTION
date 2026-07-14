class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int>vec;
        for(int i = left ;i<=right;i++){
            int c = i ;
            int n =i;
            bool t = false;
            while(n>0){
                int d = n%10;
                if(d==0 or c%d!=0){
                    t=true;
                    break;
                }
                n/=10;
            }
            if(!t) vec.push_back(c);

        }
        return vec;
        
    }
};