class Solution {
public:
    vector<string> findWords(vector<string>& words) {
        unordered_map<char,int>m;
        string a="qwertyuiopQWERTYUIOP";
        string b="asdfghjklASDFGHJKL";
        string c="zxcvbnmZXCVBNM";
        for(char& ch :a) m[ch]=1;
        for(char&ch :b) m[ch]=2;
        for(char &ch :c) m[ch]=3;
        vector<string >v;
        for(string &s : words){
            int i=m[s[0]];
            bool f=true;
            for(char&c:s){
                if(m[c]!=i){
                    f=false;
                    break;
                }
            }
            if(f) v.push_back(s);

        }
        return v;

        
    }
};