class Solution {
public:
    int sumOfEncryptedInt(vector<int>& nums) {
        int res = 0;
        for (int n : nums) {
            int mul = 0, max_d = 0;
            for (; n; n /= 10) {
                mul = mul * 10 + 1;
                max_d = max(max_d, n % 10);
            }
            res += max_d * mul;
        }
        return res;
    }
};