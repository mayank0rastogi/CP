
#include <bits/stdc++.h>
using namespace std;

int grp;
int ans=0;
int n;
vector<int>in;
int main()
{
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>grp;
        in.push_back(grp);
    }
    for(int i=0;i<n;i++)
    {
        if(in[i]!=in[i+1])
        {
            ans++;
        }
    }
    
    // for(int i=0;i<n;i++)
    // {
    //     cout<<in[i];
    // }
  cout<<ans<<endl;
    return 0;
}
