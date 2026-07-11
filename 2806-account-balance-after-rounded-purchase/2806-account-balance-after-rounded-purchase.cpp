class Solution {
public:
    int accountBalanceAfterPurchase(int purchaseAmount) {
        int n =(((5+purchaseAmount)/10)*10);
        return 100-n;
        
    }
};