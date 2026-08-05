class Solution {
public:
    int sumFourDivisors(vector<int>& nums) {
        int ans=0;
        for(int i=0;i<nums.size();i++){
            vector<int>vec;
            int count=0;
            int c=nums[i];
            for(int j=1;j<=c;j++){
                if(nums[i]%j==0){
                    vec.push_back(j);
                    count++;
                }
                if(count>4) break;
            }
            if(vec.size()==4){
                ans+=vec[0]+vec[1]+vec[2]+vec[3];
            }
        }
        return ans;
        
    }
};