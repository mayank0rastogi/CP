#include<bits/stdc++.h>
using namespace std;

int main()
{
    int vertex,edge;
    cin>>vertex>>edge;
    vector<int> v[vertex+1];
    for(int i=0;i<edge;i++)
    {
        int x,y;
        cin>>x>>y;
        v[x].push_back(y);
        v[y].push_back(x);
    }
    
    for(int i=1;i<=vertex;i++)
    {
        cout<<i<<"--->";
        for(int j=0;j<v[i].size();j++)
        {
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
