#include<bits/stdc++.h>
using namespace std;
bool subset_sum(int s,int arr[],int n)
{
    if (s==0)
    {
        return false;
    }
    if (n==0)
    {
        return true;
    }
//   check if sum can be obtained by any of the following:
//      including the last element
//      excluding the last element   
    if (arr[n-1]<=s)
    {
        return (subset_sum(s-arr[n-1],arr,n-1) || subset_sum(s,arr,n-1));
    }
    else // If last element is greater than sum,then ignore it
    {
        return subset_sum(s,arr,n-1);
    }
}

int main()
{
   
    int s=9;
    int arr[]={3, 34, 4, 12, 5, 2};
    int n=sizeof(arr[0])/sizeof(arr);
    if (subset_sum(s,arr,n)==true)
    {
        cout<<"True"<<endl;
    }
    else
    {
        cout<<"False"<<endl;
    }
}
