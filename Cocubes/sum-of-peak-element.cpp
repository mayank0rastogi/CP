/******************************************************************************
arr[]={13,5,14,12,8,30,15}
output=57


Explaination:

peak element of an array are: (13,14,30)
* 13: (13>5)
* 14: (14>5)&(14>12)
* 30: (30>8)&(30>15)
* 
* Sum=13+14+30=57
* 
*******************************************************************************/
#include <bits/stdc++.h>
using namespace std;

int get(int arr[],int n)
{
    int result =0;
    if(arr[0]>arr[1])
    {
        result+=arr[0];
        cout<<"Result "<<result<<endl;
    }
    
    if(arr[n-1] > arr[n-2])
    {
        result+=arr[n-1];
         cout<<"Result "<<result<<endl;
    }
    for(int i=1;i<n-1;i++)
    {
        if(arr[i]>arr[i-1] && arr[i]>arr[i+1])
        {
           cout<<arr[i]<<endl;
            result+=arr[i];
        }
    }
    return result;
}

/*
int get(int arr[],int n)
{
    int result =0;
   
    for(int i=0;i<n;i++)
    {
        if(arr[i]>arr[i-1] && arr[i]>arr[i+1])
        {
           cout<<arr[i]<<endl;
            result+=arr[i];
        }
    }
    return result;
}
*/

int main()

{
    int arr[]={13,5,14,12,8,30,15};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<get(arr,n);
    

    return 0;
}
