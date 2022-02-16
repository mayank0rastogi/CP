
#include <bits/stdc++.h>

using namespace std;
bool subset_sum(int arr[],int sum,int n)
{
    if (sum==0)
    {
        return true;
    }
    if(n==0)
    {
        return false;
    }
    
    if(arr[n-1]<=sum)
    {
        return (subset_sum(arr,sum-arr[n-1],n-1) || subset_sum(arr,sum,n-1));
    }
    else
    {
        return subset_sum(arr,sum,n);
    }
}
bool equal_sum_partition(int arr[],int n)
{
    int sum=0;
    for(int i=0;i<n;i++)
    {
        sum+=arr[i];
    }
    
    if(sum%2!=0)
    {
        return false;
    }
    else
    {
        return subset_sum(arr,sum/2,n);
    }
}
int main()
{
    int arr[]={1, 5, 11, 5};
    int n=sizeof(arr[0])/sizeof(arr);
    // int s=11;
    if (equal_sum_partition(arr,n)==true)
    {
        cout<<"true";
    }
    else
    {
        cout<<"false";
    }

    return 0;
}
