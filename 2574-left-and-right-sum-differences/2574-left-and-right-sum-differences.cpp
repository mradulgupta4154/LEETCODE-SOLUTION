class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        vector<int>left;
        vector<int>right;
        left.push_back(0);
        right.push_back(0);
        for(int i = 1; i<nums.size();i++){
            int sum=left[i-1]+nums[i-1];
            left.push_back(sum);
        }
        for(int j = nums.size()-2 ;j>=0;j--){
            int sum=nums[j+1] + right.back();
            right.push_back(sum);
        }
        reverse(right.begin(),right.end());
        for(int k = 0 ; k<left.size();k++){
            left[k]=abs(left[k]-right[k]);
        }
        return left;
        
    }
};