class Solution {
public:
    int missingInteger(vector<int>& nums){
        int t=nums[0];
        unordered_set<int>s(nums.begin(),nums.end());
        for(int i=1;i<nums.size();i++){
            if(nums[i]==nums[i-1]+1){
                t+=nums[i];
            }
            else {
                break;
            }
        }
        while(s.count(t)){
            t+=1;
        }
        return t;

    
        
    }
};