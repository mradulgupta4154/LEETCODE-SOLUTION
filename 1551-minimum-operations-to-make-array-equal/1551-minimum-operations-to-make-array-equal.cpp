class Solution {
public:
    int minOperations(int n) {
        int sum =0;
        vector<int>vec(n);
        for(int i = 0 ; i<n;i++){
            vec[i]=(2*i)+1;
        }
        for(int i = 0 ; i<vec.size();i++){
            sum+=abs(vec[i]-n);
        }
        return sum/2;
    }
};