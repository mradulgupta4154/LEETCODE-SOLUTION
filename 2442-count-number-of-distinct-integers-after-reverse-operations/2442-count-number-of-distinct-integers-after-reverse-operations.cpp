class Solution {
public:
    int countDistinctIntegers(vector<int>& nums) {
        vector<int>vec=nums;
        for(int i = 0 ;i<nums.size();i++){
            long long remainder =0;
            while(nums[i]>0){
                int d = nums[i]%10;
                remainder =remainder*10+d;
                nums[i]/=10;
            }
            vec.push_back((int)remainder);

        }
        return set<int>(vec.begin(), vec.end()).size();
        
    }
};