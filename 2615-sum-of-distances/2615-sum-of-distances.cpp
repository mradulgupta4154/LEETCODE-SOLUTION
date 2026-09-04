class Solution {
public:
    vector<long long> distance(vector<int>& nums) {
        int n = nums.size();

        // {sum of indices, count of occurrences}
        unordered_map<int, pair<long long, long long>> mp;

        vector<long long> ans(n, 0);

        // Left to Right
        for (int i = 0; i < n; i++) {
            if (mp.find(nums[i]) != mp.end()) {
                ans[i] += 1LL * i * mp[nums[i]].second
                        - mp[nums[i]].first;
            }

            mp[nums[i]].first += i;
            mp[nums[i]].second++;
        }

        mp.clear();

        // Right to Left
        for (int i = n - 1; i >= 0; i--) {
            if (mp.find(nums[i]) != mp.end()) {
                ans[i] += mp[nums[i]].first
                        - 1LL * i * mp[nums[i]].second;
            }

            mp[nums[i]].first += i;
            mp[nums[i]].second++;
        }

        return ans;
    }
};