class Solution {
public:
    int findSpecialInteger(vector<int>& arr) {
        unordered_map<int,int>m;
        for(int c:arr){
            m[c]++;
        }
        int a=-1;
        for(auto&[num,count]:m){
            if(count>arr.size()*0.25) a=num;
        }
        return a;
        
    }
};