#include<bits/stdc++.h>
using namespace std;
class Solution 
{
    public:
    
    bool solve(int src,int parent,vector<bool>vis,vector<int>adj[])
    {
        vis[src]=true;
        for(auto x:adj[src])
        {
            if(!vis[x])//if not visited than recursively call again and solve it 
            //and now src became its parent of new visited node x
            {
                if(solve(x,src,vis,adj))
                {
                    return true;
                }
            }
            else if(x!=parent) //check if visited but not its parent
            //than return true it means cycle form
            {
                return true;
            }
        }
        return false;
    }
    //Function to detect cycle in an undirected graph.
	bool isCycle(int V, vector<int>adj[])
	{
	    vector<bool>vis(V,false);
	    for(int i=0;i<V;i++)
	    {
	        if(!vis[i])
	        {
	            bool get=solve(i,-1,vis,adj);//as the src node does not have any parent 
	            if(get)
	            {
	                return true;
	            }
	        }
	    }
	    return false;
	    // Code here
	}
};
int main()
{
  int t;
  cin>>t;
  while(t--)
  {
   
    int V,e;
    cin>>V>>e;
    vector<int>adj[V];
    for(int i=0;i<e;i++)
    {
      int x,y;
      cin>>x>>y;
      adj[x].push_back(y);//undirected
      adj[y].push_back(x);//undirected
    }
    Solution obj;
    cout<<obj.isCyclic(V,adj)<<endl;
  }
    return 0;
    
  }
