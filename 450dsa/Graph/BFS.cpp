#include<bits/stdc++.h>
using namespace std;
class Solution
{
    public:
    //Function to return Breadth First Traversal of given graph.
	vector<int>bfsOfGraph(int V, vector<int> adj[])
	{
	    // Code here
	    vector<int>v;
	    queue<int>qu;
	    //pushing source node
	    qu.push(0);
	    
	    vector<int> vis(V,0);
	    vis[0]=1;
	    
	    while(!qu.empty())
	    {
	        int tq=qu.front();
	        qu.pop();
	        v.push_back(tq);
	        
	        for(auto i:adj[tq])
	        {
	            if(!vis[i])
	            {
	                
	                vis[i]=1;
	                qu.push(i);
	            }
	        }
	    }
	    return v;
	}
};

int main()
{
    int V,edge;
    cin>>V>>edge;
    vector<int>adj[V];
    for(int i=0;i<edge;i++)
    {
        int x,y;
        cin>>x>>y;
        adj[x].push_back(y);
        // adj[y].push_back(x);
    }
    
    Solution obj;
    vector<int>res;
    res=obj.bfsOfGraph(V,adj);
    for(int i=0;i<res.size();i++)
    {
        cout<<res[i]<<" ";
    }
    cout<<endl;
    return 0;
}
