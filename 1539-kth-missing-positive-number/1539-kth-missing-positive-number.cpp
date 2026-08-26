class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        unordered_set<int> s(arr.begin(), arr.end());
        int count = 0;
        for (int i = 1; ; i++) {
            if (s.find(i) == s.end()) {
                count++;
                if (count == k) return i;
            }
        }
    }
};