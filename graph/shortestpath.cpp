// User function Template for C++
class Solution {
  public:
    void dfs(int node,vector<vector<pair<int,int>>>&adj,vector<int>&visited,stack<int>&st){
        visited[node]=1;
        for(auto &i: adj[node]){
            int neigh=i.first;
            
            if(!visited[neigh]){
                dfs(neigh,adj,visited,st);
            }
        }
        //after visited all neighbours ,push current node into stack (from here i cannot go further to any neighbour)--
        
        st.push(node);
        
    }
    
    vector<int> shortestPath(int n, int m, vector<vector<int>>& edges) {
        // code here
        vector<vector<pair<int,int>>> adj(n);
        
        for(int i=0;i<m;i++){
            int u=edges[i][0];
            int v=edges[i][1];
            int w=edges[i][2];
            adj[u].push_back({v,w});
            
        }
        
        vector<int> visited(n,0);
        stack<int> st;
        
        for(int i=0;i<n;i++){
            if(!visited[i]){
                dfs(i,adj,visited,st);
            }
        }
        
        vector<int> dist(n,INT_MAX);
        dist[0]=0;
        while(!st.empty()){
            int node=st.top();
            st.pop();
            
            for(auto &edge: adj[node]){
                int neigh=edge.first;
                int weight=edge.second;
                
                if(dist[node]!=INT_MAX && dist[node]+weight<dist[neigh]){
                
                    dist[neigh]=dist[node]+weight;
                    
                }
                
            }
        }
        
        for(int i=0;i<n;i++){
            if(dist[i]==INT_MAX){
                dist[i]=-1;
            }
        }
        return dist;
        
    }
};
