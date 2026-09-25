class Solution {
public:
    string reformat(string s) {
        vector<string>l,d;
        for(int i=0;i<s.length();i++){
            if(s[i]>='0' and s[i]<='9'){
                d.push_back(string(1,s[i]));
            }
            else{
                l.push_back(string(1,s[i]));
            }
        }
        if(abs((int)d.size()-(int)l.size())>1) return "";
        if(d.size()<l.size()) swap(d,l);
        string c="";
        int o=0,e=0;
        for(int i=0;i<s.length();i++){
            if(i%2==0){
                c+=d[o];
                o++;
            }
            else{
                c+=l[e];
                e++;
            }
        }
        return c;
    }
};