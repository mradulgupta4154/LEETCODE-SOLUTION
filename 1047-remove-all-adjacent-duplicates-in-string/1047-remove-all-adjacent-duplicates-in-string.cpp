class Solution {
public:
    string removeDuplicates(string s) {
        stack<int>t;
        string c="";
        for(int i=0;i<s.length();i++){
            t.push(s[i]);
            char a =t.top();
            t.pop();
            if(!t.empty() and t.top()==a) t.pop();
            else t.push(a);
        }
        while(!t.empty()){
            c+=t.top();
            t.pop();
        }
        reverse(c.begin(),c.end());
        return c;
        
    }
};