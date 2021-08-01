
#include<bits/stdc++.h>
using namespace std;
class Solution
{
    public:
    
    bool solve(int src,vector<int> &order,vector<int> &vis,vector<int>adj[])
    {
        vis[src]=1;
        order[src]=1;
        for(auto x:adj[src])
        {
            if(!vis[x])
            {
                bool check=solve(x,order,vis,adj);
                if(check==true)
                {
                    return true;
                }
            }
            //check if current element x is already visited 
            //than check for od=rder of x is 1 or not if 1 than 
            //return true means we have found the cycle
            else if(order[x])
            {
                return true;
            }
        }
        
        //when we go outside the cycle than make order of that elemet make 0 again 
        order[src]=0;
        return false;
    }
    
	//Function to detect cycle in a directed graph.
	bool isCyclic(int V, vector<int> adj[]) 
	{
	    vector<int>order(V,0);
	    vector<int>vis(V,0);
	    for(int i=0;i<V;i++)
	    {
	        if(!vis[i])
	        {
	            bool c=solve(i,order,vis,adj);
    	      
    	        if(c==true)
    	        {
    	            return true;
    	        }
	         }
	 }
	    return false;
	   	// code here
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
      adj[x].push_back(y);//directed
    }
    Solution obj;
    cout<<obj.isCyclic(V,adj)<<endl;
  }
    return 0;
    
  }
