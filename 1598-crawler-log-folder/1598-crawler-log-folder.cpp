class Solution {
public:
    int minOperations(vector<string>& logs) {
        int count=0 ;
        stack <string> s;
        for(int i=0;i<logs.size();i++){
            s.push(logs[i]);
            if(s.top()=="./") continue;
            else if(s.top()!="../") count++;
            else {
                if (count==0) continue;
                else count--;
            }   
        }
        return count;
        
    }
};