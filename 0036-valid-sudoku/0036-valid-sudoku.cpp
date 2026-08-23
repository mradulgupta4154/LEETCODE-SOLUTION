class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        for (int i = 0; i < 9; i++) {
            for (int j = 0; j < 9; j++) {
                if (board[i][j] == '.') continue;
                // row check
                for (int k = j+1; k < 9; k++) {
                    if (board[i][j] == board[i][k]) return false;
                }
                // col check
                for (int k = i+1; k < 9; k++) {
                    if (board[i][j] == board[k][j]) return false;
                }
                // box check
                int boxRow = (i/3)*3, boxCol = (j/3)*3;
                for (int r = boxRow; r < boxRow+3; r++) {
                    for (int c = boxCol; c < boxCol+3; c++) {
                        if (r==i && c==j) continue;
                        if (board[i][j] == board[r][c]) return false;
                    }
                }
            }
        }
        return true;
    }
};