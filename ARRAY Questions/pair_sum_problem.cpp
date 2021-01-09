//check whether there exist two elements in an array such thta their sum is equal to given k
#include<bits/stdc++.h>
#include<climits>.h>
using namespace std;
bool pairsum(int a[], int n,int k)
{

    for(int i=0;i<n-1;i++)
    {

        for(int j=i+1;j<n;j++)
        {
            if(a[i]+a[j]==k)
            {

                cout<<i<<"  "<<j<<endl;
                return true;
            }

        }

    }
    return false;
}
int main()
{
    int n;
    int k;
    cin>>n;
    cin>>k;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }


cout<<pairsum(a,n,k)<<endl;
return 0;
}
