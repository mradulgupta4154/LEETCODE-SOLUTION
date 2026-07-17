class Solution {
public:
    int minLength(string s) {
        stack<char>st;
        for(int i =0 ;i<s.length();i++){
            st.push(s[i]);
            if(st.top()=='B' or st.top()=='D'){
                char c =st.top();
                st.pop();
                if(!st.empty() and ((c=='B' and st.top()=='A') or (c=='D' and st.top()=='C'))){
                    st.pop();
                }
                else{
                    st.push(c);
                }
            }
        }
        return st.size();
        
    }
};