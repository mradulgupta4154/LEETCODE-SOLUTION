class Solution {
public:
    bool squareIsWhite(string c) {
        unordered_map<char,int> m ;
        m['a']=1;
        m['b']=2;
        m['c']=3;
        m['d']=4;
        m['e']=5;
        m['f']=6;
        m['g']=7;
        m['h']=8;
        if((m[c[0]] + (c[1])-'0') %2 ==0) return false;
        return true;
    }
};