class Solution {
public:
    string removeKdigits(string num, int k) {
        string s;
        for(int i =0;i<num.length();i++){
            while(!s.empty() and k>0 and s.back()>num[i]){
                s.pop_back();
                k--;
            }
            s.push_back(num[i]);
        }
        while(k>0 and !s.empty()){
            s.pop_back();
            k--;
        }
        int idx=0;
        while(idx<(int)s.size()-1 and s[idx]=='0') idx++;
        s=s.substr(idx);
        return s.empty()?"0":s;

    }
};