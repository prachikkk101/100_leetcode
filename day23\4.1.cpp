class Solution {
public:
    void dfs(int row,int col,vector<vector<int>>&ans,vector<vector<int>>&image,int newCol,int delRow[],int delCol[],int inicol){
        ans[row][col] = newCol;
        int n = image.size();
        int m = image[0].size();
        for(int i = 0;i<4 ; i++){
            int nrow = row + delRow[i];
            int ncol = col + delCol[i];
…        int delRow[] = {-1,0,1,0};
        int delCol[] = {0,1,0,-1};
        dfs(sr,sc,ans,image,color,delRow,delCol,inicol);
        return ans;
        
    }
};
