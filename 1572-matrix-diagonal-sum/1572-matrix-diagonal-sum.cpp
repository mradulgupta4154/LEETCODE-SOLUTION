class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int sum = 0 ;
        int m = mat.size() , n = mat[0].size();
        for (int i = 0 ; i<mat.size();i++){
            for (int j = 0 ; j<mat[0].size();j++){
                if (i==j){
                    sum+=mat[i][i];
                }
                else if (j==n-1-i){
                    sum+=mat[i][j];
                }
            }
        }
        return sum;
        
    }
};