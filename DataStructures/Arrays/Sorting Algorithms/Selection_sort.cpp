/******************************************************************************



*******************************************************************************/
#include <bits/stdc++.h>
using namespace std;

void selection_sort(int arr[],int n)
{
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(arr[j]<arr[i])
            {
                int temp=arr[j];
                arr[j]=arr[i];
                arr[i]=temp;
            }
        }
    }
}

int main()
{
    int arr[]={12,3,24,5,67,2,17};
    int n =sizeof(arr)/sizeof(arr[0]);
    selection_sort(arr,n);
    
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
        
    }

    return 0;
}
