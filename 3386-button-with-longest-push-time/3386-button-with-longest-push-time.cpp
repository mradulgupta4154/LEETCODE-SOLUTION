class Solution {
public:
    int buttonWithLongestTime(vector<vector<int>>& events) {
        map<int,int>m;
        int c=0;
        for(int i=0;i<events.size();i++){
            int duration=events[i][1]-c;
            if(m.find(events[i][0])==m.end()){
                m[events[i][0]]=duration;
            }
            else{
                m[events[i][0]]=max(m[events[i][0]],duration);
            }
            c=events[i][1];
        }
        int n=INT_MIN;
        for(auto&[num,count]:m){
            if(count>n){
                n=count;
            }
        }
        for(auto&[num,count]:m){
            if(count==n) return num;
        }
        return 0;

        
    }
};