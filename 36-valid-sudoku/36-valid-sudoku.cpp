class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        int checkrow[10][10]={0},checkcol[10][10]={0},checkbox[10][10]={0};       //declaring three check arrays with initially zero values.
        for(int row=0;row<9;row++){
            for(int col=0;col<9;col++){
                if(board[row][col]=='.')continue;         //if not a number we need to skip to the next index.
                int num=board[row][col]-'0';                //as 'char' is given we make it int.
                int box=(row/3)*3+(col/3);                 //applying formula
                if(checkrow[row][num] || checkcol[num][col] || checkbox[box][num])       //if any of the checker gives true then the number is already present in that row/col/box.
                    return false;
                checkrow[row][num]=checkcol[num][col]=checkbox[box][num]=true;       //after checking we set the values true
            }
        }
        return true;
    }
};