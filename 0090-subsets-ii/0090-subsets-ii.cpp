class Solution {
public:
    void all(vector<int>& nums, vector<int>& ans, int start, vector<vector<int>>& allsub) {
        allsub.push_back(ans);
        for (int i = start; i < nums.size(); i++) {
            if (i > start && nums[i] == nums[i-1]) continue;
            ans.push_back(nums[i]);
            all(nums, ans, i + 1, allsub);
            ans.pop_back();
        }
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<vector<int>> allsub;
        vector<vector<int>> allsub1;
        vector<int> ans ;
        sort(nums.begin(),nums.end());
        all(nums,ans,0,allsub);
        
        return allsub;
    }
};