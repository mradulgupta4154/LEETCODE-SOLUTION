class Solution {
public:
    bool collinear(vector<int>a,vector<int>b,vector<int>c){
        long long cross=(long long)(b[0]-a[0])*(c[1]-a[1])-(long long)(c[0]-a[0])*(b[1]-a[1]);
        return cross==0;
    }
    int maxPoints(vector<vector<int>>& points) {
        int count = 1;
        int n= points.size();
        if(n<=2) return n;
        for (int i = 0 ; i<points.size();i++ ){
            for(int j=i+1;j<n;j++){
                if(points[i]==points[j]) continue;
                int best=2;
                for(int k =j+1;k<n;k++){
                    if(collinear(points[i],points[j],points[k])){
                        best++;
                    }
                }
                count=max(best,count);
                if(count==n) return count;
            }    
        }
        return count ;
        
    }
};