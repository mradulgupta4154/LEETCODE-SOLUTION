class Solution {
public:
    int calPoints(vector<string>& o) {
        stack<int>s;
        int score=0;
        for(int i = 0 ;i<o.size();i++){
            if(o[i]=="C"){
                s.pop();
            }
            else if(o[i]=="D"){
                s.push(2*s.top());
            }
            else if (o[i]=="+"){
                int a =s.top();
                s.pop();
                int b =s.top();
                s.push(a);
                s.push(a+b);
            }
            else{
                s.push(stoi(o[i]));
            }

        }
        if(s.empty()) return 0;
        while(!s.empty()){
            score+=s.top();
            s.pop();
        }
        return score;
    }
};