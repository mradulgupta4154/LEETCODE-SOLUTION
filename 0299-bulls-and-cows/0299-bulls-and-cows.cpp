class Solution {
public:
    string getHint(string s, string g) {
        int co=0;
        for(char d ='0';d<='9';d++){
            int cs=count(s.begin(),s.end(),d);
            int cg=count(g.begin(),g.end(),d);
            co+=min(cs,cg);
        }
        int sa=0;
        for(int i=0;i<s.length();i++){
            if(s[i]==g[i]) sa++;
        }
        string a= to_string(sa)+'A'+to_string(co-sa)+'B';
        return a;
    }
};