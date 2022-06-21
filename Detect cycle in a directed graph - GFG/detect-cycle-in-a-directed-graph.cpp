// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
  public:
    // Function to detect cycle in a directed graph.
    int dfs(vector<int> adj[],int s,vector<int> &vis,vector<int> &temp)
    {
        vis[s]=1;
        temp[s]=1;
        for(auto x:adj[s])
        {
            if(!vis[x])
            {
                int ans=dfs(adj,x,vis,temp);
                if(ans==1) return 1;
                
            }
            else if(temp[x]) return 1;
        }
        temp[s]=0;
        return 0;
    }
    bool isCyclic(int V, vector<int> adj[]) {
        vector<int> vis(V,0);
        vector<int> temp(V,0);
        for(int i=0;i<V;i++){
            if(!vis[i]){
                int c=dfs(adj,i,vis,temp);
                if(c==1) return true;
            }
        }
        return false;
    }
};

// { Driver Code Starts.

int main() {

    int t;
    cin >> t;
    while (t--) {
        int V, E;
        cin >> V >> E;

        vector<int> adj[V];

        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
        }

        Solution obj;
        cout << obj.isCyclic(V, adj) << "\n";
    }

    return 0;
}
  // } Driver Code Ends