
#include <bits/stdc++.h>
using namespace std;
int main()
{
    set<int>all_level;
    int total_level;//total level in a game
    cin>>total_level;
    int p_x,p_y;// no of of level a player pass
    cin>>p_x;
    int l;
    for(int i=0;i<p_x;i++)
    {
        cin>>l;
        all_level.insert(l);
    }
    cin>>p_y;
    for(int i=0;i<p_y;i++)
    {
        cin>>l;
        all_level.insert(l);
    }
    // cout<<all_level.size()<<endl;
    if(all_level.size()==total_level)
    {
        cout<<"I become the guy."<<endl;
    }
    else
    {
        cout<<"Oh, my keyboard!"<<endl;
    }
    

    return 0;
}

