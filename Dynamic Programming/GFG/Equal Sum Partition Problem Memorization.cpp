
#include <bits/stdc++.h>

using namespace std;

bool subset_sum(int arr[],int sum,int n,vector<vector<bool>>dp)
{
   
   if(sum==0)
   {
       return true;
   }
   if(n==0 && sum!=0)
   {
       return false;
   }
   
   if(dp[n][sum]!=false)
   {
       return dp[n][sum];
   }
   
   if(arr[n-1]<=sum)
   {
       dp[n][sum]= (subset_sum(arr,sum,n-1,dp) || subset_sum(arr,sum-arr[n-1],n-1,dp));
       return dp[n][sum];
   }
   else
   {
       return subset_sum(arr,sum,n-1,dp);
   }
   
}
bool equal_sum_partition(int arr[],int n)
{
    int sum=0;
    for(int i=0;i<n;i++)
    {
        sum+=arr[i];
    }
    cout<<sum<<endl;
    
    if(sum%2!=0)
    {
        return false;
    }
    // initialize dp array To store overlapping subproblems
    vector<vector<bool>> dp(n+1,vector<bool>(sum+1,false));
    
    ///return even subaaray by checking subset sum
        return subset_sum(arr,sum/2,n,dp);
  
}
int main()
{
    int arr[]={3, 1, 5, 9, 12}; //gives true
    // int arr[]={3, 1, 5, 9, 14}; //gives false even if it is even but still gives false because not form subset sum equal
    int n=sizeof(arr)/sizeof(arr[0]);
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
