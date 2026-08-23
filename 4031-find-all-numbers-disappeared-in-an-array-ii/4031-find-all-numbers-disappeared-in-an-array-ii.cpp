class Solution {
public:
    vector<vector<int>> findDisappearedNumbers(vector<int>& nums, int lower, int upper) {
        unordered_set<int> present(nums.begin(), nums.end());
        vector<vector<int>> ans;
        int i = lower;
        while (i <= upper) {
            if (present.count(i)) {
                i++;
                continue;
            }
            int start = i;
            while (i <= upper && !present.count(i)) i++;
            ans.push_back({start, i - 1});
        }
        return ans;
    }
};