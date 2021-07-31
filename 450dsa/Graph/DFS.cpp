class Solution 
{
    public:
    
    vector<int>v;
    
    void solve(int src,vector<int>visited,vector<int>adj[])
    {
        visited[src]=1;
        v.push_back(src);
        for(auto x:adj[src])
        {
            if(!visited[x])
            {
                solve(x,visited,adj);
            }
        }
    }
	//Function to return a list containing the DFS traversal of the graph.
	vector<int>dfsOfGraph(int V, vector<int> adj[])
	{
	    v.clear();
	    vector<int>visited(V,0);//mark all vertices 0 that means not visited
	    solve(0,visited,adj);
	    return v;
	    // Code here
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
        adj[y].push_back(x);
    }
    
    Solution obj;
    vector<int>res;
    res=obj.dfsOfGraph(V,adj);
    for(int i=0;i<res.size();i++)
    {
        cout<<res[i]<<" ";
    }
    cout<<endl;
    return 0;
}
