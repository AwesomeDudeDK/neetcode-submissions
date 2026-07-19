class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        for (auto& row : board) {
            if (!validRow(row)) return false;
        }

        for (int i = 0; i < board.size(); i++) {
            unordered_set<char> s;
            for (int j = 0; j < board.size(); j++) {
                char c = board[j][i];
                if (c != '.') {
                    if (s.contains(c)) return false;
                    else s.insert(c);
                }
            }
        }

        for (int i = 0; i < board.size(); i += 3) {
            for (int j = 0; j < board.size(); j += 3) {
                if (!validSquare(board, i, j)) return false;
            }
        }

        return true;
    }

    bool validRow(vector<char>& row) {
        unordered_set<char> s;
        for (char c : row) {
            if (c != '.') {
                if (s.contains(c)) return false;
                else s.insert(c);
            }
        }
        return true;
    }

    bool validSquare(vector<vector<char>>& board, int i, int j) {
        unordered_set<char> s;
        for (int y = i; y < i + 3; y++) {
            for (int x = j; x < j + 3; x++) {
                char c = board[y][x];
                if (c != '.') {
                    if (s.contains(c)) return false;
                    else s.insert(c);
                }
            }
        }
        return true;
    }
};
