class Solution {
public:
    string rearrangeString(string s, char x, char y) {
        string a,b,o;
        for(char c:s){
            if (c==y) a+=c;
            else if(c==x) b+=c;
            else o+=c;
        }
        return a+o+b;
    }
};