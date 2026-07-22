class Solution {
public:
    bool parseBoolExpr(string e) {
        stack<char>s;
        for(int i =0;i<e.length();i++){
            if(e[i]==',' or e[i]=='(') continue;
            if(e[i]=='t' or e[i]=='f' or e[i]=='!' or e[i]=='&' or e[i]=='|'){
                s.push(e[i]);
            }
            else if(e[i]==')'){
                bool hast=false,hasf=false;
                while(s.top()!='!' and s.top()!='&' and s.top()!='|'){
                    char t=s.top();
                    s.pop();
                    if(t=='t') hast=true;
                    if(t=='f') hasf=true;
                }
                char op=s.top();
                s.pop();
                if(op=='!'){
                    s.push(hast ? 'f':'t');
                }
                else if(op=='&'){
                    s.push(hasf ? 'f':'t');
                }
                else{
                    s.push(hast ? 't':'f');
                }     
            }
        }
        return s.top()=='t';
    }
};