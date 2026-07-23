class Solution {
public:
    int findClosestNumber(vector<int>& nums) {
        int largest = INT_MAX;
        int gap = INT_MAX;
        for (int i = 0; i < nums.size(); i++) {
            if (abs(nums[i]) < gap) {
                gap = abs(nums[i]);
                largest = nums[i];
            } else if (abs(nums[i]) == gap)
                largest = max(nums[i], largest);
        }

        return largest;
    }
};