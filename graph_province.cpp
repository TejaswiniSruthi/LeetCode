class Solution {
public:
    void dfs(vector<int>& vis,vector<int> adj[],int i){
        vis[i]=1;
        for(auto it:adj[i]){
            if(!(vis[it])){
                dfs(vis,adj,it);
            }
        }
    }
    int findCircleNum(vector<vector<int>>& isConnected) {
        int n=isConnected.size();
        int c=0;
        vector<int>adj[n];
        for(int i=0;i<isConnected.size();i++){
            for(int j=0;j<isConnected[i].size();j++){
                if(i!=j && isConnected[i][j]==1){
                    adj[j].push_back(i);
                    adj[i].push_back(j);
                }
            }
        }
        vector<int>vis(n,0);
        //int vis[n]={0};
        for(int i=0;i<n;i++){
            if(!(vis[i])){
                c++;
                dfs(vis,adj,i);
            }
        }
        return c;
    }
};
