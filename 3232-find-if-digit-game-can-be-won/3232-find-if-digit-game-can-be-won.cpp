class Solution {
public:
    bool canAliceWin(vector<int>& nums) {
        int dsum=0;
        int sum =0;
        for(int i = 0 ;i<nums.size();i++){
            if(to_string(nums[i]).length()==2){
                dsum+=nums[i];
            }
            else{
                sum+=nums[i];
            }
            
        }
        if(dsum>sum) return true;
        else if(sum>dsum) return true;
        else return false;
        
    }
};