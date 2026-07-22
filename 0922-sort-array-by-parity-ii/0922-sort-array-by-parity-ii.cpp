class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) {
        int n=nums.size();
        vector<int>ans(n);
        vector<int>vec,vec1;
        for(int i =0;i<n;i++){
            if(nums[i]%2==0){
                vec.push_back(nums[i]);
            }
            else vec1.push_back(nums[i]);
        }
        int e=0,o=0;
        for(int i =0;i<n;i++){
            if(i%2==0){
                ans[i]=vec[e++];
            }
            else{
                ans[i]=vec1[o++];
            }
        }
        return ans;
        
    }
};