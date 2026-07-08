class Solution {
public:
    int countStudents(vector<int>& st, vector<int>& sa) {
        queue<int>q;
        stack<int>s;
        
        for(int i = 0 ; i<st.size();i++) q.push(st[i]);
        for(int i = sa.size()-1; i>=0;i--) s.push(sa[i]);
        int count = q.size();
        int rotation=0;
        while(!q.empty() and rotation<q.size()){
            if(q.front()==s.top()){
                q.pop();
                s.pop();
                count--;
                rotation=0;
            }
            else{
                q.push(q.front());
                q.pop();
                rotation++;
            }
        }
        return count;
        
    }
};