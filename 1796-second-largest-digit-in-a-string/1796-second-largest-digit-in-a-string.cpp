class Solution {
public:
    int secondHighest(string s) {
        set<int>se;
        for(int i=0;i<s.length();i++){
            if(s[i]>='0' and s[i]<='9'){
                se.insert(s[i]-'0');
            }
        }
        vector<int>vec{se.begin(),se.end()};
        if(vec.size()<2) return -1;
        return vec[vec.size()-2];

        
    }
};