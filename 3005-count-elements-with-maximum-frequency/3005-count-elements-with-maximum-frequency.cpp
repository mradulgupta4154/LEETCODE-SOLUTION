class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        unordered_map<int,int>m;
        for(int i=0;i<nums.size();i++){
            m[nums[i]]++;
        }
        int maxi=0;
        for(auto&[num,count]:m){
            int c=0;
            if(count>c) c=count;
            maxi=max(maxi,c);
        }
        int d=0;
        for(auto&[num,count]:m){
            if(count==maxi) d++;
        }
        return d*maxi;
        
    }
};