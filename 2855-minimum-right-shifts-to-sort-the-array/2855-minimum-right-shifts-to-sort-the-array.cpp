class Solution {
public:
    int minimumRightShifts(vector<int>& nums) {
        int misleadIndex = -1;
        for (int i = 0; i + 1 < nums.size(); i++) {
            if (nums[i] > nums[i + 1]) {
                misleadIndex = i + 1;
                break;
            }
        }
        int n = nums.size();

        if (misleadIndex >= 1) {
            for (int i = misleadIndex; i != misleadIndex - 1; i = (i + 1) % n) {

                if (nums[i % n] > nums[(i + 1) % n]) {
                    return -1;
                }
            }
        }
        return (misleadIndex == -1) ? 0 : (n - misleadIndex);
    }
};