class Solution {
public:
    int kthFactor(int n, int k) {
        vector<int> ans;
        for(int i =1 ; i<n+1;i++){
            if(n%i==0){
                ans.push_back(i);
            }
        }
        return (ans.size()>=k)?ans[k-1]:-1 ;
        
    }
};