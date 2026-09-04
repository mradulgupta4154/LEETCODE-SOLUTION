class Solution {
public:
    int minimumDistance(vector<int>& nums) {
        unordered_map<int, vector<int>> mp;
        int n = nums.size();
        for (int i = 0; i < n; i++) {
            mp[nums[i]].push_back(i);
        }
        int mini = INT_MAX;
        for(int i = 0; i < n; i++){
            if(mp.find(nums[i]) != mp.end()){
                vector<int>& list = mp[nums[i]];
                if(list.size() >= 3){
                    for(int j = 1; j < list.size() - 1; j++){
                        int t = abs(list[j-1] - list[j]) + abs(list[j+1] - list[j]);
                        t *= 2;
                        mini = min(mini, t);
                    }
                }
                mp.erase(nums[i]);
            }
        }
        return mini == INT_MAX ? -1 : mini;
    }
};