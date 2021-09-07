
#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int v,e;
    cin>>v>>e;
    vector<vector<int>> g(v);
    for(int i=0;i<e;i++)
    {
        int x,y;
        cin>>x>>y;
        g[x].push_back(y);
        g[y].push_back(x);
    }
    
    int res[v];//stores all nodes colors
    bool available[v];
    
    res[0]=0;//make first node as 0th color
    for(int i=1;i<v;i++)
    {
        res[i]=-1;
    }
    for(int i=0;i<v;i++)
    {
        available[i]=false;//by default all colors are available
    }
    
    //now make a loop which tarverse the whole graph from node 1 to last
    int cn=0;//chromatic no will be zero(marked)
    for(int i=1;i<v;i++)
    {
        for(auto x:g[i]) //for node i traverse a loop to its adjacent element
        {
            if(res[x]!=-1)//if adjacent's color is not equal to -1 it that adjacent vertex is colored with any of the color
            {
                available[res[x]]=true;//it means we make it true for that adjacent node color so that we can't use it
            }
        }
  
    
           // by using below logic we will find the maximum color use in this
            int cr=0;
            for(cr=0;cr<v;cr++)
            {
                if(available[cr]==false)
                {
                    break;
                }
            }
            
            res[i]=cr;
            cn=max(cn,cr+1);
            
            //now again if we go to next node reset it to false
            for(auto x:g[i])
            {
                if(res[x]!=-1)
                {
                    available[res[x]]=false;//reset it again
                }
            }
    }
    
    cout<<cn<<endl;
    for(int i=0;i<v;i++)
    {
        cout<<res[i]<<" ";
    }
    
}

int main()
{
//<---Below are the two graph which i taken as my test cases----> 
  
  
//   5 6
//   0 1
//   1 3
//   2 3   -->output  2
//   0 2      0 1 1 0 0
//   2 4
//   1 4

//   5 6
//   0 1
//   1 3
//   2 3   --> output 3
//   0 2    0 1 1 0 2
//   2 4
//   1 4
//   0 4
    solve();
    
    return 0;
}

