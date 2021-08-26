
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends


class Solution
{
    public:
    
 
    
	//Function to detect cycle in a directed graph.
	bool isCyclic(int V, vector<int> adj[]) 
	{
	    vector<int>in(V,0);
	    queue<int>q;
	    //set all indegree of all the vertex
	    for(int i=0;i<V;i++)
	    {
	        for(auto x:adj[i])
	        {
	            in[x]++;
	        }
	    }
	    
	    for(int i =0;i<V;i++)
	    {
	        if(in[i]==0)
	        {
	            q.push(i);
	        }
	    }
	    
	    
	    int count=q.size();
	    while(!q.empty())
	    {
	        int curr=q.front();
	        q.pop();
	        for(auto x:adj[curr])
	        {
	            in[x]--;
	            if(in[x]==0)
	            {
	                q.push(x);
	                count++;
	            }
	        }
	    }
	    //count --> it is basically count of nodes having indegree zero i have found
	    if(count==V)
	    {
	        return false;
	        //it means we have not found any cycle in it
	        //beacause all indegree we have found is zero which is equal to total no od V i.e, nodes 
	    }
	    else
	    {
	        return true;
	    }
	    

	   	// code here
	}
};

// { Driver Code Starts.


int main()
{
    
    int t;
    cin >> t;
    while(t--)
    {
    	int V, E;
    	cin >> V >> E;

    	vector<int> adj[V];

    	for(int i = 0; i < E; i++)
    	{
    		int u, v;
    		cin >> u >> v;
    		adj[u].push_back(v);
    	}

    	Solution obj;
    	cout << obj.isCyclic(V, adj) << "\n";
    }

    return 0;
}

  // 
