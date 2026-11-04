class Solution {
public:
    int maxDivScore(vector<int>& nums, vector<int>& divisors) {
        int maxScore = -1;
        int bestDivisor = -1;

        for (int i = 0; i < divisors.size(); i++) {
            int currentScore = 0;
            for (int j = 0; j < nums.size(); j++) {
                if (nums[j] % divisors[i] == 0) {
                    currentScore++;
                }
            }

            // Update the best divisor if we find a strictly greater score,
            // or if we find the same score with a smaller divisor value (tie-breaking).
            if (currentScore > maxScore) {
                maxScore = currentScore;
                bestDivisor = divisors[i];
            } else if (currentScore == maxScore) {
                if (bestDivisor == -1 || divisors[i] < bestDivisor) {
                    bestDivisor = divisors[i];
                }
            }
        }

        return bestDivisor;
    }
};