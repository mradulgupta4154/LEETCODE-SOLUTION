class Solution {
public:
    int timeRequiredToBuy(vector<int>& ti, int k) {
        queue<int>q;
        int t = 0 ;
        for(int i = 0 ;i<ti.size();i++){
            q.push(ti[i]);
        }
        int pos=k;
        while(!q.empty()){
            q.front()=q.front()-1;
            t++;
            if(q.front()==0){
                if(pos==0) return t;
                q.pop();
                pos--;
            }
            else{
                q.push(q.front());
                q.pop();
                if(pos==0) pos=q.size()-1;
                else pos--;
            }
        }
        return t;
    }
};