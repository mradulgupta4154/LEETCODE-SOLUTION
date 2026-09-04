class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        for (int i = 0; i < nums.size(); i++) {
            int c = *max_element(nums.begin(), nums.begin() + i + 1); 
            int d = *min_element(nums.begin() + i, nums.end());
            if (c - d <= k) return i;   
        }
        return -1;
    }
};