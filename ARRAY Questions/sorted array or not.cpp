#include<bits/stdc++.h>
using namespace std;

bool sorted_array(int a[],int n)
{
    //base case
    if(n==1)
    {
        return true;
    }
    bool rest_array=sorted_array(a+1,n-1);
    return (a[0]<a[1] && rest_array);
}

int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {

        cin>>a[i];
    }

    cout<<sorted_array(a,n);
    return 0;
}
