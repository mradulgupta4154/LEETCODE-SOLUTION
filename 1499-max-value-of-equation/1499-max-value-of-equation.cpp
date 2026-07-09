class Solution {
public:
    int findMaxValueOfEquation(vector<vector<int>>& points, int k) {
        int maxi=INT_MIN;
        int left = 0;
        multiset<pair<int,int>> ms;
        for(int i = 0 ;i<points.size();i++){
            int xi=points[i][0] ,yj=points[i][1];
            while(left<i and xi-points[left][0]>k){
                ms.erase(ms.find({points[left][1]-points[left][0],points[left][0]}));
                left++;
            }
            if(!ms.empty()){
                auto best=*ms.rbegin();
                int sum =best.first+xi+yj;
                maxi=max(maxi,sum);
            }
            ms.insert({yj-xi,xi});
        }
        return maxi;
        
    }
};