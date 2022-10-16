class Solution {
public:
    void dfs(int node,vector<int>&vis,vector<vector<int>>isConnected,int length){
        vis[node]=1;
        for(int j=0;j<length;j++){
            if(isConnected[node][j]==1 && vis[j]==0){
                dfs(j,vis,isConnected,length);
            }
        }
        
        
        
    }
    int findCircleNum(vector<vector<int>>& isConnected) {
        int ans=0;
        int l=isConnected.size();
        vector<int>vis(l,0);
        
            for(int i=0;i<l;i++){
                if(!vis[i]){
                    dfs(i,vis,isConnected,l);
                    ans++;
                }
            }
        
        return ans;
    }
};