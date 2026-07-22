class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        int n=nums.size();
        vector<int>ans;
        vector<int>vec,vec1;
        for(int i =0;i<n;i++){
            if(nums[i]%2==0){
                vec.push_back(nums[i]);
            }
            else vec1.push_back(nums[i]);
        }
        for(int i =0;i<vec.size();i++){
            ans.push_back(vec[i]);
        }
        for(int i =0;i<vec1.size();i++){
            ans.push_back(vec1[i]);
        }
        return ans;
        
    }
};