class Solution {
public:
    vector<int> sumEvenAfterQueries(vector<int>& nums, vector<vector<int>>& queries) {
        vector<int>vec;
        int sum=0;
        for(int x:nums) if(x%2==0) sum+=x;
        for(int i = 0 ; i<queries.size();i++){
            int val=queries[i][0],idx=queries[i][1];
            if(nums[idx]%2==0){
                sum-=nums[idx];
            }
            nums[idx]+=val;
            if(nums[idx]%2==0) sum+=nums[idx];
            vec.push_back(sum);
        }
        return vec;
        
    }
};