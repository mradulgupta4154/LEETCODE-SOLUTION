class Solution {
public:
    long long pickGifts(vector<int>& gifts, int k) {
        multiset<int, greater<int>> ms(gifts.begin(), gifts.end()); // sorted descending

        while (k--) {
            int top = *ms.begin();          // largest element
            ms.erase(ms.begin());           // remove it
            ms.insert((int)sqrt(top));      // insert its sqrt back
        }

        long long ans = 0;
        for (int val : ms) ans += val;
        return ans;
    }
};