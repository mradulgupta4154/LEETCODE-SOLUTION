class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int first=-1,last=-1;
        int n=nums.size();
        vector<int> vec;
        for(int i=0 ; i<n ;i++){
            if (nums[i]==target){
                if (first==-1) first=i;
                last=i;
            }
        }
        vec.push_back(first);
        vec.push_back(last);
        return vec;
    }
};