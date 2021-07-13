/******************************************************************************


*******************************************************************************/
#include <bits/stdc++.h>
using namespace std;
void threeWayPartition(int arr[], int n, int a, int b)
{
    int left=0,right=n-1;
    for(int i=0;i<n;i++)
    {
        if(arr[i]<a)
        {
            swap(arr[i],arr[left]);
            left++;
        }
        else if(arr[i]>b)
        {
            swap(arr[i],arr[right]);
            right++;
            
        }
        else
        {
            //to stop the iterator
            i--;
        }
    }
}

int main()
{
  int arr[]={1, 2, 3, 3, 4};
  int n=sizeof(arr)/sizeof(arr[0]);
  int a=1;
  int b=2;
  threeWayPartition(arr,n,a,b);
  for(int i=0;i<n;i++)
  {
      cout<<arr[i]<<" ";
  }

    return 0;
}
