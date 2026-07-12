class Solution {
public:
    vector<int> canSeePersonsCount(vector<int>& h) {
        int n =h.size();
        vector<int>vec(n,0);
        stack<int> s;
        for(int i=h.size()-1 ; i>=0;i--){
            if(s.empty()){
               s.push(h[i]);
               vec[i]=0;
            }
            else{
                int count =0;
                while(!s.empty() and s.top()<=h[i] ){
                    s.pop();
                    count++;
                }
                if(!s.empty()){
                    vec[i]=count+1;
                }
                else{
                    vec[i]=count;
                }
                s.push(h[i]);
            }



        }      
        return vec;  
    }
};