#include<bits/stdc++.h>
using namespace std;

int main()
{
    int vertex,edge;
    cin>>vertex>>edge;
    // vector<vector<int>> v( vertex , vector<int> (edge, 0));
    int v[vertex+1][vertex+1];
    for(int i=1;i<=vertex;i++)
    {
        for(int j=1;j<=vertex;j++)
        {
            v[i][j]=0;
        }
        
    }
    for(int i=0;i<edge;i++)
    {
        int x,y;
        cin>>x>>y;
        v[x][y]=1;
        v[y][x]=1;
    }
    
    for(int i=1;i<=vertex;i++)
    {
        cout<<i<<"-->";
        for(int j=1;j<=vertex;j++)
        {
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
