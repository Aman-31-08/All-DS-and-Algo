class Solution {
public:
    bool dfs(vector<int> adj[],int s,vector<int> &vis)
    {
        if(vis[s]==-1)
        {
            vis[s]=1;
        }
        for(auto it:adj[s])
        {
            if(vis[it]==-1)
            {
                vis[it]=1-vis[s];
                if(!dfs(adj,it,vis)) return false;
            }else if(vis[it]==vis[s]) return false;
        }
        return true;
    }
	bool isbipartite(int V, vector<int>adj[]){
	    vector<int> vis(V,-1);
	    for(int i=0;i<V;i++)
	    {
	        if(vis[i]==-1)
	        {
	            if(!dfs(adj,i,vis)) return false;
	        }
	        
	    }
	    return true;
	}

    bool isBipartite(vector<vector<int>>& graph) {
        int n = graph.size();
        vector<int> adj[n];
        
        for(int i = 0; i < n; i++){
            for(auto j: graph[i]){
                adj[i].push_back(j);
            }
        }
        return(isbipartite(n,adj));
    }
};