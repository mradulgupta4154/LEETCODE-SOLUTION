class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minPrice = INT_MAX;
        int maxProfit = 0;

        for (int price : prices) {
            if (price < minPrice) {
                minPrice = price;          // track the lowest buy price so far
            } else {
                maxProfit = max(maxProfit, price - minPrice); // best profit if sold today
            }
        }

        return maxProfit;
    }
};