class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m =matrix.size() , n =matrix[0].size();
        int startrow = 0 , endrow =m-1 ;
        while(startrow<=endrow){
            int midrow = startrow + (endrow - startrow)/2;
            if (target >= matrix[midrow][0] and target <=matrix[midrow][n-1]){
                int start =0 , end = n-1;            
                while (start<=end){
                    int mid = start + (end - start)/2;
                    if (matrix[midrow][mid]== target){
                        return true ;

                    }else if (matrix[midrow][mid]<= target){
                        start = mid +1;
                    }
                    else {
                        end = mid - 1 ;
                    }
                }
                return false;
            }
            else if (matrix[midrow][0]>target ){
                endrow = midrow - 1;
            }
            else {
                startrow = midrow + 1 ;
            }
        }
        return false;
        
    }
};