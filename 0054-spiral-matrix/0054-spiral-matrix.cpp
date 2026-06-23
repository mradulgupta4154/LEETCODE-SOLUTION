class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> ans;
        int m = matrix.size(), n = matrix[0].size();
        int srow = 0, scol = 0, erow = m-1, ecol = n-1;

        while (srow <= erow && scol <= ecol) {
            // Top row: left to right
            for (int i = scol; i <= ecol; i++) {
                ans.push_back(matrix[srow][i]);
            }
            srow++;

            // Right column: top to bottom
            for (int i = srow; i <= erow; i++) {
                ans.push_back(matrix[i][ecol]);
            }
            ecol--;

            // Bottom row: right to left
            if (srow <= erow) {
                for (int i = ecol; i >= scol; i--) {
                    ans.push_back(matrix[erow][i]);
                }
                erow--;
            }

            // Left column: bottom to top
            if (scol <= ecol) {
                for (int j = erow; j >= srow; j--) {
                    ans.push_back(matrix[j][scol]);
                }
                scol++;
            }
        }

        return ans;
    }
};