class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int>s;
        for(int i  =0;i<tokens.size();i++){
            if(isdigit(tokens[i][0]) or (tokens[i][0]=='-' and tokens[i].size()>1)){
                s.push(stoi(tokens[i]));
            }
            else{
                if(tokens[i]=="+"){
                    int a = s.top();
                    s.pop();
                    int b = s.top();
                    s.pop();
                    s.push(a+b);
                }
                else if(tokens[i]=="-"){
                    int a = s.top();
                    s.pop();
                    int b = s.top();
                    s.pop();
                    s.push(b-a);
                }
                else if(tokens[i]=="*"){
                    int a = s.top();
                    s.pop();
                    int b = s.top();
                    s.pop();
                    s.push(a*b);
                }
                else{
                    int a = s.top();
                    s.pop();
                    int b = s.top();
                    s.pop();
                    s.push(b/a);
                }
            }

        }
        return s.top();
        
    }
};