class Solution {
  public:
  bool dfs(int node,vector<vector<int>> &adj,vector<int> &visited,vector<int> &rec,vector<int> &ans){
      visited[node]=1;
      rec[node]=1;
      
      for(auto neigh: adj[node]){
          if(!visited[neigh]){
              if(dfs(neigh,adj,visited,rec,ans)){
                  return true;
              }
          }else if(rec[neigh]){
              return true;
          }
      }
      rec[node]=0;
      ans.push_back(node);
      return false;
  }
    vector<int> findOrder(int n, vector<vector<int>> &pre) {
        // code here
        vector<vector<int>> adj(n);
        vector<int> ans;
        for(auto &i:pre){
            int u=i[0];
            int v=i[1];
            
            adj[v].push_back(u);
        }
        
        vector<int> visited(n,0);
        vector<int> rec(n,0);
        
        for(int i=0;i<n;i++){
            if(!visited[i]){
                if(dfs(i,adj,visited,rec,ans)){
                    return {}; 
                }
            }
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};