/******************************************************************************



*******************************************************************************/
#include <bits/stdc++.h>
using namespace std;


int max_subarray(int arr[],int n)
{
    int csum=arr[0];
    int osum=arr[0];
    
    for(int i=1;i<n;i++)
    {
        if(csum>=0)
        {
            csum=csum+arr[i];
        }
        else
        {
            csum=arr[i];
        }
        
        if(csum>osum)
        {
            osum=csum;
        }
    }
    return osum;
}

int main()
{
    int arr[]={1,2,3,-2,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    
    int get = max_subarray(arr,n);
    
    cout<<get<<endl;
    

    return 0;
}
