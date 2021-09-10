// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends

class Solution {
  public:
  
  
  bool checkcycle(int node,vector<int>adj[],int vis[],int dfsvisit[])
  {
      vis[node]=1;
      dfsvisit[node]=1;
      
      for(auto it:adj[node])
      {
          if(!vis[it])
          {
              if(checkcycle(it,adj,vis,dfsvisit))
              {
                  return true;
              }
          }
          else if(dfsvisit[it])
          {
              return true;
          }
      }
      
      dfsvisit[node]=0;
      return false;
  }
    // Function to detect cycle in a directed graph.
    bool isCyclic(int V, vector<int> adj[]) {
        int vis[V], dfsvisit[V];
        memset(vis,0,sizeof vis);
        memset(dfsvisit,0,sizeof dfsvisit);
        
        for(int i=0;i<V;i++)
        {
            if(!vis[i])
            {
                if(checkcycle(i,adj,vis,dfsvisit))
                {
                    return true;
                }
            }
        }
        // code here
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
