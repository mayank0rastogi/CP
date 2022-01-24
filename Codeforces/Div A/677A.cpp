#include<bits/stdc++.h>
using namespace std;
int h,n;

int main()
{
    cin>>n>>h;
    int a,sum=0;
    
    for(int i=0;i<n;i++)
    {
        cin>>a;
        if(a>h)
        {
            sum+=2;
        }
        else
        {
            sum+=1;
        }
    }
    
    cout<<sum<<endl;
}
