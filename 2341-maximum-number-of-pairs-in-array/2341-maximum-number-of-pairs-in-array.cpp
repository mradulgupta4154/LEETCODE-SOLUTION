class Solution {
public:
    vector<int> numberOfPairs(vector<int>& nums) {
        unordered_map<int,int>m;
        for(int i:nums){
            m[i]++;
        }
        int c=0;
        int d=0;
        for(auto&[num,count]:m){
            if(count%2==0){
                c+=count/2;
            }
            else{
                c+=count/2;
                d+=1;
            }
        }
        return {c,d};
        
    }
};