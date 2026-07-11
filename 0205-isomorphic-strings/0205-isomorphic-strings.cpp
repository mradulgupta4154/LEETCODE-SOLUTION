class Solution {
public:
    bool isIsomorphic(string s, string t) {
        map<char,char>m;
        map<char,char>m2;
        if(s.length()!=t.length()) return false;
        for(int i = 0 ; i<s.length();i++){
            char a =s[i] , b =t[i];
            if(m.count(a) and m[a]!=b) return false;
            if(m2.count(b) and m2[b]!=a) return false;
            m[a]=b;
            m2[b]=a;
        }
        return true;
        
    }
};