class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {
        int n =prices.size();
        stack<int>s;
        vector<int>v(n);
        
        for(int i=n-1;i>=0;i--){
            while(!s.empty() and s.top()>prices[i]){
                s.pop();
            }
            v[i]=s.empty()?prices[i]:prices[i]-s.top();
            s.push(prices[i]);
        }
        return v;
        
    }
};