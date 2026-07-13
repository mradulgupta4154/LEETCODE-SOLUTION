class Solution {
public:
    vector<int> powerfulIntegers(int x, int y, int bound) {
        set<int>results;
        for(long long xi=1;xi<=bound;xi*=x){
            for(long long yj=1;yj<=bound;yj*=y){
                if(xi+yj<=bound){
                    results.insert((int)xi+yj);
                }
                if(y==1) break;
            }
            if(x==1) break;
        }
        return vector<int>(results.begin(),results.end());
    }
};