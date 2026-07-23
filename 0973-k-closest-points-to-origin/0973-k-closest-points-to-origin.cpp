class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& p, int k) {
        multimap<int, vector<int>> mp;
        for (int i = 0; i < p.size(); i++) {
            int dist = p[i][0]*p[i][0] + p[i][1]*p[i][1];
            mp.insert({dist, p[i]});
        }

        vector<vector<int>> ans;
        int count = 0;
        for (auto it = mp.begin(); it != mp.end() && count < k; it++, count++) {
            ans.push_back(it->second);
        }
        return ans;
    }
};