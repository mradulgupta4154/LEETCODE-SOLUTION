class Solution {
public:
    int sumDivisibleByK(vector<int>& nums, int k) {
        unordered_map<int,int>m;
        for(int i=0;i<nums.size();i++){
            m[nums[i]]++;
        }
        int sum=0;
        for(auto&[num,count]:m){
            if(count%k==0){
                sum+=count*num;
            }
        }
        return sum;
        
    }
};