class Solution {

    bool is_safe(int row,int col,vector<string>&board,int n){
        int nrow=row;
        int ncol=col;
        while(row>=0 && col>=0){
            if(board[row][col]=='Q') {return false;
          
            }
             row--;
           col--;
        }
        row=nrow;
        col=ncol;
        while(col>=0){
            if(board[row][col]=='Q'){
                return  false;
            }
            col--;
        }

        row=nrow;
        col=ncol;
        while(row<n && col>=0){
            if(board[row][col]=='Q'){
                return false;
            }
            row++;
            col--;
        }
        return true;
    }
    void solve(int col,vector<vector<string>>&ans,vector<string>&board,int n){
        if(col==n){
            ans.push_back(board);
            return;
        }
        for(int i=0;i<n;i++){
            if(is_safe(i,col,board,n)){
                board[i][col]='Q';
                solve(col+1,ans,board,n);
                board[i][col]='.';
            }
        }
    }
public:
    vector<vector<string>> solveNQueens(int n) {
         vector<vector<string>>ans;
         vector<string>board(n);
         string s(n,'.');
         for( int i=0;i<n;i++){
            board[i]=s;
         }
         solve(0,ans,board,n);
         return ans;


    }
};
