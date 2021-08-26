// Time Complexity: O(V+E), where V is the number of nodes and E is the number of edges. 
// Auxiliary Space: O(V)


#include <bits/stdc++.h>
using namespace std;
int main()
{

    int v,e;
    cin>>v>>e;
    vector<int>graph[v+1];
    vector<int>indegree(v+1,0);
    
    for(int i=0;i<e;i++)
    {
    	int x,y;
    	cin>>x>>y;
    	graph[x].push_back(y);//directed graph
      //since x is connected to y so y indegree increases
    
    	indegree[y]++; 
    
    }
    
    vector<int>time_taken(v+1,0);
    queue<int>q;
    for(int i=0;i<=v;i++)
    {
    	if(indegree[i]==0)
    	{
    		q.push(i);
    		time_taken[i]=1;
    	}
    }
    
    
    while(!q.empty())
    {
    	int curr=q.front();
    	q.pop();
    	for(auto x:graph[curr])
    	{
    		indegree[x]--;
    		if(indegree[x]==0)
    		{
    			q.push(x);
    		   time_taken[x]=time_taken[curr]+1;//here curr is basically parent node
    
    		}
    	}
    }
    
    for(int i=1;i<=v;i++)
    {
    	cout<<time_taken[i]<<" ";
    }

  return 0;
}
