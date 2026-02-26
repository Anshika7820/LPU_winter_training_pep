class Solution {
  public:
  
  bool dfs(int node, vector<vector<int>> &adj,vector<int> &visited,vector<int> &rec){
      visited[node]=1;
      rec[node]=1;
      
      for(auto neigh: adj[node]){
          if(!visited[neigh]){
              if(dfs(neigh,adj,visited,rec)){
                  return true;
              }
          }else if(rec[neigh]){
              return true;
          }
      }
      rec[node]=0;
      return false;
  }
  
    bool isPossible(int N, int P, vector<pair<int, int> >& pre) {
       vector<vector<int>> adj(N);
       for(auto &i: pre){
           int u=i.first;
           int v=i.second;
       
           adj[v].push_back(u);
       }
           vector<int> rec(N,0);
           vector<int> visited(N,0);
           for(int i=0;i<N;i++){
               if(!visited[i]){
                   if(dfs(i,adj,visited,rec)){
                       return false;
                   }
               }
           }
           return true;
    }
};