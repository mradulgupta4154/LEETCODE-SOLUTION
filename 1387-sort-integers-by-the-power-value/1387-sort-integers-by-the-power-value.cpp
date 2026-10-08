class Solution {
public:
    int a(int x){
        int count=0;
        while(x!=1){
            if(x%2==0){
                x/=2;
            }
            else{
                x=3*x+1;
            }
            count++;
        }
        return count;
    }
    int getKth(int lo, int hi, int k) {
        vector<pair<int,int>>vec;
        for(int i=lo;i<=hi;i++){
            int c=a(i);
            vec.push_back({c,i});
        }
        sort(vec.begin(),vec.end());
        return vec[k-1].second;
        
    }
};