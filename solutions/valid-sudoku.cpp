class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        int n = (int)board.size();
        unordered_map<char,bool> rows[n];
        unordered_map<char,bool> cols[n];
        unordered_map<char,bool> boxs[n];
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                char c = board[i][j];
                if(c != '.'){
                    if(rows[i].count(c)){
                        return false;
                    }
                    if(cols[j].count(c)){
                        return false;
                    }
                    int k = 3*(i/3) + j/3 ;
                    if(boxs[k].count(c)){
                        return false;
                    }
                    rows[i][c] = true;
                    cols[j][c] = true;
                    boxs[k][c] = true;
                }
            }
        }
        return true;
    }
};
