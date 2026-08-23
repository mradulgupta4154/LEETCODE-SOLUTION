class Solution {
public:
    int longestSubarray(vector<int>& nums, int k) {
        int n = nums.size();
        int maxVal = *max_element(nums.begin(), nums.end());
        maxVal = max(maxVal, 2);

        // Sieve smallest prime factor up to maxVal
        vector<int> spf(maxVal + 1, 0);
        for (int i = 2; i <= maxVal; i++) {
            if (spf[i] == 0) {
                for (int j = i; j <= maxVal; j += i) {
                    if (spf[j] == 0) spf[j] = i;
                }
            }
        }

        // Precompute distinct prime factors for each number in nums
        vector<vector<int>> factors(n);
        for (int i = 0; i < n; i++) {
            int x = nums[i];
            vector<int> primes;
            while (x > 1) {
                int p = spf[x];
                primes.push_back(p);
                while (x % p == 0) x /= p;
            }
            factors[i] = primes;
        }

        unordered_map<int, int> primeCount; // prime -> # elements in window using it
        int distinctPrimes = 0;
        int left = 0;
        int best = 0;

        for (int right = 0; right < n; right++) {
            // add nums[right]'s primes
            for (int p : factors[right]) {
                if (primeCount[p] == 0) distinctPrimes++;
                primeCount[p]++;
            }

            // shrink window while too many distinct primes
            while (distinctPrimes > k) {
                for (int p : factors[left]) {
                    primeCount[p]--;
                    if (primeCount[p] == 0) distinctPrimes--;
                }
                left++;
            }

            best = max(best, right - left + 1);
        }

        return best;
    }
};