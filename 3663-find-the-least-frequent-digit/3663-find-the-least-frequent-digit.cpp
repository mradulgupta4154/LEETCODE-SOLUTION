class Solution {
public:
    int getLeastFrequentDigit(int n) {
        string c=to_string(n);
        unordered_map<int,int>m;
        for(int i=0;i<c.length();i++){
            m[c[i]]++;
        }
        vector<int>vec;
        for(auto&[num,count]:m){
            vec.push_back(count);
        }
        int d=*min_element(vec.begin(),vec.end());
        int ans =INT_MAX;
        for(auto&[num,count]:m){
            if(count==d) ans = min(ans,num-'0') ;
        }
        return ans;
    }
};