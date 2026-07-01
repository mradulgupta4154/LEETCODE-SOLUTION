class Solution {
public:
    int minElement(vector<int>& nums) {
        vector<int> vec;
        for(int i = 0 ; i<nums.size();i++){
            int a = 0;
            while(nums[i]!=0){
               int digit=nums[i]%10;
               nums[i]/=10;
               a+=digit;
               
            }
            vec.push_back(a);
        }     
        sort(vec.begin(),vec.end());
        return vec[0];
    }
};