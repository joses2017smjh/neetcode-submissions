class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        unordered_set<int>row[9];
        unordered_set<int>col[9];
        unordered_set<int>box[9];

        for(int x = 0; x < 9; x++){
            for(int y = 0; y < 9; y++){

                if(board[x][y] == '.'){
                    continue;
                }
                int boardint = (x / 3)*3 + (y/3);
                int current = board[x][y] - '0';

                if(row[x].count(current) || col[y].count(current) || box[boardint].count(current)){
                    return false;
                }

                row[x].insert(current);
                col[y].insert(current);
                box[boardint].insert(current);
            }
        }
        return true;
    }
};