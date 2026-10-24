class Solution {
private:
    bool isPalindrome(int n) {
        string s = to_string(n);
        int l = 0, r = s.length() - 1;
        while (l < r) {
            if (s[l++] != s[r--]) return false;
        }
        return true;
    }

    long long getCost(const vector<int>& nums, int target) {
        long long cost = 0;
        for (int x : nums) {
            cost += abs(x - target);
        }
        return cost;
    }

public:
    long long minimumCost(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        int median = nums[n / 2];

        // Search outwards from the median to find the closest smaller/equal 
        // and closest larger/equal palindromes.
        int leftPalindrome = -1, rightPalindrome = -1;

        for (int i = median; i >= 1; --i) {
            if (isPalindrome(i)) {
                leftPalindrome = i;
                break;
            }
        }

        for (int i = median; ; ++i) {
            if (isPalindrome(i)) {
                rightPalindrome = i;
                break;
            }
        }

        return min(getCost(nums, leftPalindrome), getCost(nums, rightPalindrome));
    }
};