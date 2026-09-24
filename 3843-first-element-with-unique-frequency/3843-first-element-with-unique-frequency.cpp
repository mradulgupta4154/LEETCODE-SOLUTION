class Solution {
public:
    int firstUniqueFreq(vector<int>& nums) {
        unordered_map<int,int>m,f;
        for(int c:nums){
            m[c]++;
        }
        int a=-1;
        for(auto&[num,count]:m){
            f[count]++;
        }
        for(int c:nums){
            if(f[m[c]]==1) return c;
        }
        return -1;
        
    }
};