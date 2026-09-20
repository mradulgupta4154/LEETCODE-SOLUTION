class Solution {
public:
    int winningPlayerCount(int n, vector<vector<int>>& pick) {
        vector<unordered_map<int,int>> count(n);
        for (auto& p : pick) {
            int player = p[0], color = p[1];
            count[player][color]++;
        }

        int winners = 0;
        for (int i = 0; i < n; i++) {
            for (auto& [color, cnt] : count[i]) {
                if (cnt > i) {          // player i needs > i balls of one color
                    winners++;
                    break;
                }
            }
        }
        return winners;
    }
};