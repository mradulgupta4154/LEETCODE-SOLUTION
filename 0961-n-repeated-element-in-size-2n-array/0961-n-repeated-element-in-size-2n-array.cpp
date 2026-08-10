class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
        unordered_map<int,int>m;
        for(int i:nums){
            m[i]++;
        }
        int count1=0;
        for(auto &[num,count]:m){
            if(count>count1) count1=count;
        }
        for(auto &[num,count]:m){
            if(count==count1) return num;
        }
        return 1;


        
    }
};