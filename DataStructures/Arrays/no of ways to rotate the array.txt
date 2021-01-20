/******************************************************************************

No of ways to rotate the array
*******************************************************************************/
#include<bits/stdc++.h>
using namespace std;
void min_moves_to_sort(int a[],int n)
{
    int count=0;
    int index;
    
    for(int i=0;i<n-1;i++)
    {
        if(a[i]<a[i+1])
    
    {
        count++;
        index=i;
    }
    }
    if(count==0)
    {
        std::cout << "0" << std::endl;
    }
    
    else if(count==n-1)
    {
        cout<<n-1;
    }
    
    else if(count==1 &&a[0]<=a[n-1])
    {
        cout<<index+1;
    }
    else
    {
        cout<<"-1"<<endl;
    }
}


int main()
{
    int a[]={2,1,5,4,2};
    int n=sizeof(a)/sizeof(a[0]);
    min_moves_to_sort(a,n);

    return 0;
}
