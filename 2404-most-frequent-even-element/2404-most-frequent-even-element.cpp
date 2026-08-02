class Solution {
public:
    int mostFrequentEven(vector<int>& nums) {
        map<int,int>m;
        for(int i:nums){
            m[i]++;
        }
        int maxcount=0;
        int result=-1;
        for(auto&[num,count]:m){
            if(count>maxcount and num%2==0){
                maxcount=count;
                result=num;
            }
        }
        return result;

        
    }
};