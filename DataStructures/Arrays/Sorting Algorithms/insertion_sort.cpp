/******************************************************************************


*******************************************************************************/
#include <bits/stdc++.h>
using namespace std;

void insertion_sort_algorithm(int arr[],int n)
{
    for(int i=1;i<n;i++)
    {
         int curr=arr[i];
         cout<<"Value of cuurent item->"<<curr<<endl;
         int prev_one=i-1;
         
         while(arr[prev_one]>curr && prev_one>=0)
         {
             arr[prev_one+1]=arr[prev_one];
             cout<<"Value of arr[prev_one+1]->"<<arr[prev_one+1]<<endl;
             prev_one--;
         }
          arr[prev_one+1]=curr;
          cout<<"Value of arr[prev_one+1](after while loop)->"<<arr[prev_one+1]<<endl;
          for(int i=0;i<n;i++)
          {
            cout<<arr[i]<<" ";
          }
    }
  
}

int main()
{
    int arr[]={23,1,4,6,13,78,34};
    int n=sizeof(arr)/sizeof(arr[0]);
    insertion_sort_algorithm(arr,n);
    
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
  cout<<endl;
    return 0;
}
