class Solution {
public:
    int nearestDrone(vector<vector<int>>& drones, vector<int>& target) {
        int bestIdx = -1;
        long long bestDist = LLONG_MAX;
        int tx = target[0], ty = target[1];

        for (int i = 0; i < (int)drones.size(); i++) {
            int x = drones[i][0], y = drones[i][1], range = drones[i][2];
            long long dist = abs((long long)x - tx) + abs((long long)y - ty);
            if (dist <= range && dist < bestDist) {
                bestDist = dist;
                bestIdx = i;
            }
        }
        return bestIdx;
    }
};