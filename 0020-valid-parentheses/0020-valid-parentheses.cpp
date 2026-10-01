class Solution {
public:
    bool isValid(string s) {
        stack<char>st;
        for(int i=s.length()-1;i>=0;i--){
            if(s[i]==')' or s[i]=='}' or s[i]==']') st.push(s[i]);
            else{
                if (st.empty()) return false;
                if(s[i]=='(' and st.top()!=')') return false;
                if(s[i]=='[' and st.top()!=']') return false;
                if(s[i]=='{' and st.top()!='}') return false;
                st.pop();
            }
        }
        return st.empty();
        
    }
};