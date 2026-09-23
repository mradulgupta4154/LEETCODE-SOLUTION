class Solution {
public:
    vector<int> minDistinctFreqPair(vector<int>& nums) {
        map<int, int> mp;

        for (int x : nums) {
            mp[x]++;
        }

        for (auto itx = mp.begin(); itx != mp.end(); itx++) {
            for (auto ity = next(itx); ity != mp.end(); ity++) {
                if (itx->second != ity->second) {
                    return {itx->first, ity->first};
                }
            }
        }

        return {-1, -1};
    }
};