class Solution {
public:
    vector<int> countTasks(vector<int>& tasks, vector<int>& shifts) {
        int n = tasks.size();
        vector<long long> prefix(n + 1, 0);
        for (int i = 0; i < n; i++) prefix[i+1] = prefix[i] + tasks[i];
        long long total = prefix[n];

        vector<int> ans(shifts.size());
        long long used = 0; 

        for (int i = 0; i < (int)shifts.size(); i++) {
            long long b = shifts[i];
            long long cap = total - used;

            if (b >= cap) {
                ans[i] = 0;    
                used = 0;  
            } else {
                used += b;
                int k = int(upper_bound(prefix.begin(), prefix.end(), used) - prefix.begin()) - 1;
                ans[i] = n - k;
            }
        }
        return ans;
    }
};