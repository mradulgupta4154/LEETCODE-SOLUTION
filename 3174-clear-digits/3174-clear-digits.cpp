class Solution {
public:
    string clearDigits(string s) {
        stack<int>c;
        string d="";
        for(int i =0;i< s.length();i++){
            c.push(s[i]); 
            if (isdigit(c.top())){
                c.pop();
                c.pop();
            }

        }
        while(!c.empty()){
            d+=c.top();
            c.pop();
        }
        reverse(d.begin(),d.end());
        return d;

        
    }
};