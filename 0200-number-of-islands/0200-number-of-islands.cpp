class Solution {
public:

    void dfs(vector<vector<char>>&grid,vector<vector<bool>>&vis,int x,int y,int m,int n){
        vis[x][y]=true;
        vector<pair<int,int>> directions={{-1,0},{0,-1},{1,0},{0,1}};

        for(auto dir : directions){
            int xnew=x+dir.first;
            int ynew=y+dir.second;
            if(0<= xnew && xnew < m && 0<=ynew&& ynew<n && !vis[xnew][ynew] && grid[xnew][ynew]=='1'){
                dfs(grid,vis,xnew,ynew,m,n);
            }
        }
    }

    int numIslands(vector<vector<char>>& grid) {
     int m=grid.size();
     int n=grid[0].size();
     int count=0;

     vector<vector<bool>> visited(m,vector<bool> (n,false));

     for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(grid[i][j]=='1' && !visited[i][j]){
                count++;
                dfs(grid,visited,i,j,m,n);
            }
        }
     }
     return count;
    }
};