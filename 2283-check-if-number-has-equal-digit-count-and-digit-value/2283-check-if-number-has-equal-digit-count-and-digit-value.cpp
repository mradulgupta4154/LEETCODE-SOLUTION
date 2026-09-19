class Solution {
public:
    bool digitCount(string num) {
        unordered_map<int,int>m;
        for(int i=0;i<num.length();i++){
            m[num[i]-'0']++;
        }
        bool is=true;
        for(int i=0;i<num.length();i++){
            if(m[i]!=num[i]-'0') is=false;
        }
        return is;
    }
};