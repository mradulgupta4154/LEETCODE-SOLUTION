class Solution {
public:
    double minPrice(vector<int>& prices, vector<int>& dis) {
        sort(prices.rbegin(),prices.rend());
        sort(dis.rbegin(),dis.rend());
        int i=0;
        double ans=0;
        for(;i<dis.size()&& i < (int)prices.size();i++){
            ans+=prices[i]*(100.0-dis[i])/100.0;
        }
        
        for(;i<prices.size();i++){
            ans+=prices[i];
        }
        return ans;
        
    }
};