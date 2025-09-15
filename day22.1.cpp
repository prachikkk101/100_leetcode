class Solution {
public:
    void dfs(vector<vector<int>>& isConnected,vector<bool>& visited,int i){
        visited[i] = true;
        for(int j = 0; j<isConnected.size();j++){
            if(isConnected[i][j]==1&&!visited[j]){
                dfs(isConnected,visited,j);
            }

        }
…        }
        return provinces;
    }
};
