class Solution {
    public:
        int minimumSwaps(vector<int>& nums) {
        int count = 0,n=nums.size();
        for(int i = 0;i < nums.size();i++){
            if(nums[i] == 0){
                count++;
            }
        }
        if(count == 0 or count==n){
            return 0;
        }
        int x = 0;
        for(int i = nums.size() - 1;i >= (nums.size() - count);i--){
            if(nums[i] == 0){
                x++;
            }
        }
        return (count - x);
    }
};