class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        int t= nums.size();
        vector<int>vec(t);
        vector<int>IInd;
        IInd.insert(IInd.begin(),nums.begin()+n,nums.end());
        nums.erase(nums.begin()+n,nums.end());
        for(int i = 0 ;i<t;i++){
            if(i%2==0){
                vec[i]=nums[i/2];
            }
            else{
                vec[i]=IInd[i/2];
            }
        }
        return vec;
    }
};