class Solution {
public:
    string removeStars(string s) {
        stack<char>t;
        string c="";
        for(int i = 0 ;i<s.length();i++){
            t.push(s[i]);
            if(t.top()=='*'){
                t.pop();
                t.pop();
            }      
        }
        if (t.empty()) return c;
            while(!t.empty()){
                c+=t.top();
                t.pop();
            }
        reverse(c.begin(),c.end());
        return c;
        
    }
};