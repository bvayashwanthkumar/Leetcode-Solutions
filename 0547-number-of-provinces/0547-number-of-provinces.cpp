class Solution {
public:

    void dfshelper(int node,vector<vector<int>>&adj,vector<bool>&visited){
        visited[node]=true;

        for(int n=0;n<adj.size();n++){
            if(!visited[n] && adj[node][n]==1)dfshelper(n,adj,visited);
        }
    }
    int findCircleNum(vector<vector<int>>& isConnected) {
        vector<bool>visited(isConnected.size(),false);

        int count=0;

        for(int i=0;i<isConnected.size();i++){
            if(!visited[i]){
                count++;
                dfshelper(i,isConnected,visited);
            }
        }
        return count;
    }
};