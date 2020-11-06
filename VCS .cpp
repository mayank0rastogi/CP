#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int c=0,n,m,k,p,q,i,count=0;
        set <int> a1;
        set <int> a2;
        set <int> a3;
        cin>>n;
        for(i=1;i<=n;i++)
        {
            a1.insert(i);
        }
        cin>>m>>k;
        while(m--)
        {
            cin>>p;
            a2.insert(p);
        }
        while(k--)
        {
            cin>>q;
            a3.insert(q);
        }
        for(int x : a2)
        {
            for(int y : a3)
            {
                if(y==x)
                {
                    c++;
                }
            }
        }
        cout<<c<<" ";
        a3.insert(a2.begin(),a2.end());
        for(int y : a1)
        {
            auto it = a3.find(y);
            if(it==a3.end())
            {
                count++;
            }
        }
        cout<<count<<endl;
    }
    return 0;
}