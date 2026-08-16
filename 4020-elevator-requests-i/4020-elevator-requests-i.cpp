class Solution {
public:
    int elevatorRequests(int n, vector<int>& r) {
        int sum=r[0];
        for(int i=1;i<r.size();i++){
            sum+=abs(r[i]-r[i-1]);
        }
        return sum;

        
    }
};