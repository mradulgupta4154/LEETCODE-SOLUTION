class Solution {
public:
    int maxArea(vector<int>& height) {
    int maxar = 0;
    int l = 0;
    int r = height.size() - 1;
    
    while (l < r) {
        int ar = (r - l) * min(height[l], height[r]);
        maxar = max(ar, maxar);
        if (height[l] < height[r]) {
            l++;
        } else {
            r--;   // ← is this correct in your code?
        }
    }
    return maxar;

    }
};