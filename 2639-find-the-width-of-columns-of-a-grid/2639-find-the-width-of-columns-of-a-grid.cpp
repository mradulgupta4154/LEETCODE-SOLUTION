class Solution {
public:
    vector<int> findColumnWidth(vector<vector<int>>& grid) {
        vector<int> vec;
        int cols = grid[0].size();
        int rows = grid.size();

        for (int i = 0; i < cols; i++) {        
            int count = 0;
            for (int j = 0; j < rows; j++) {   
                string c = to_string(grid[j][i]);
                int d = c.length();
                count = max(count, d);
            }
            vec.push_back(count);
        }
        return vec;
    }
};