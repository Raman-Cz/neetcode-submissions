class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        
        //row
        for(int i=0;i<9;i++){
            unordered_set<char>set;
            for(int j=0;j<9;j++){
                char c = board[i][j];
                if(c != '.'){
                    if(set.find(c) != set.end()) return false;
                    set.insert(c);
                }
            }
        }

        //col
        for(int i=0;i<9;i++){
            unordered_set<char>set;
            for(int j=0;j<9;j++){
                char c = board[j][i];
                if(c != '.'){
                    if(set.find(c) != set.end()) return false;
                    set.insert(c);
                }
            }
        }

        // 3 x 3
        vector<vector<int>> v = {{0,0},{0,3},{0,6},
                                {3,0},{3,3},{3,6},
                                {6,0},{6,3},{6,6}};
        for(auto x : v){
            unordered_set<char>set;
            int sx = x[0];
            int sy = x[1];

            for(int i = sy ; i < sy + 3 ; i++){
                for(int j=sx;j <sx + 3 ;j++){
                    char c = board[i][j];
                    if(c != '.'){
                        if(set.find(c) != set.end()) return false;
                        set.insert(c);
                    }
                }
            }
        }
        return true;
    }
};
