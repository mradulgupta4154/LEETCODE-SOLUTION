#include <set>
#include <vector>
class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        int a , b;
        vector<int> ans;
        int n = grid.size() , m =grid[0].size();
        int actual=(n*n)*(n*n+1)/2 , exp =0;
        unordered_set <int> s;
        for (int i = 0 ; i<n ; i++){
            for (int j = 0 ; j<n; j++){
                exp+=grid[i][j];
                if (s.find(grid[i][j])!=s.end()){
                    a=grid[i][j];
                    ans.push_back(a);
                }
                s.insert(grid[i][j]);
            }
        } 
        b=actual+a-exp;
        ans.push_back(b);
        return ans;
        
    }
};