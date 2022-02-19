#include<bits/stdc++.h>
using namespace std;

int count_subset_sum(int arr[],int sum_s1, int n,vector<vector<int>>dp)
{
    for(int i=0;i<n+1;i++)
    {
        for(int j=0;j<sum_s1+1;j++)
        {
            if(i==0)
            {
                dp[i][j]=0;
            }
            if(j==0)
            {
                dp[i][j]=1;
            }
        }
    }
    
    for(int i=1;i<n+1;i++)
    {
        for(int j=1;j<sum_s1+1;j++)
        {
            if(arr[i-1]<=j)
            {
                dp[i][j]=(dp[i-1][j-arr[i-1]]+dp[i-1][j]);
            }
            
            else
            {
                dp[i][j]=dp[i-1][j];
            }
        }
    }
    
    return dp[n][sum_s1];
    
}
int count_the_no_of_subset_with_a_given_difference(int arr[],int n,int diff)
{
    int sum=0;
    for(int i=0;i<n;i++)
    {
        sum+=arr[i];
    }
    
    int sum_s1=(sum+diff)/2;
    
    vector<vector<int>> dp(n+1,vector<int>(sum_s1+1,0));
    
    return count_subset_sum(arr,sum_s1,n,dp);
    
}
int main()
{
    // int arr[]={1,1,1,1,1};
    int arr[]={1,1,2,3};
    int n=sizeof(arr)/sizeof(arr[0]);
    // int diff=3;
    int diff=1;
    cout<<count_the_no_of_subset_with_a_given_difference(arr,n,diff);
    return 0;
}
