class Solution {
public:
    int countGoodRotations(vector<int>& nums) {
        int n = nums.size();
        int half = n / 2;
        
        // Double the array to handle circular rotations easily
        vector<long long> doubled(2 * n);
        for (int i = 0; i < n; i++) {
            doubled[i] = nums[i];
            doubled[i + n] = nums[i];
        }
        
        // Prefix sums over doubled array
        vector<long long> prefix(2 * n + 1, 0);
        for (int i = 0; i < 2 * n; i++) {
            prefix[i + 1] = prefix[i] + doubled[i];
        }
        
        long long total = prefix[n]; // sum of all elements
        int count = 0;
        
        for (int r = 0; r < n; r++) {
            long long firstSum = prefix[r + half] - prefix[r];
            long long secondSum = total - firstSum;
            if (firstSum > secondSum) count++;
        }
        
        return count;
    }
};