class Solution {
public:
    int maxDifference(string s) {
        unordered_map<char,int>m;
        for(char c:s){
            m[c]++;
        }
        int maxi=INT_MIN;
        int mini=INT_MAX;
        for(auto&[num,count]:m){
            if(count%2==0){
                int d=count;
                mini=min(d,mini);
            }
            else{
                int e=count;
                maxi=max(e,maxi);
            }
        }
        return maxi-mini;
        
    }
};