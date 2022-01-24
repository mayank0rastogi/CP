
#include<bits/stdc++.h>


using namespace std;
int n,b,arr[101];

int main()
{
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>b;
        arr[b]=i;
    }
    //concept---
    //b becomes index and index becomes value
    // 2-1
    // 3-2
    // 4-3
    // 1-4
    for(int i=1;i<=n;i++)
    {
        cout<<arr[i]<<" ";
    }
    

    return 0;
}
