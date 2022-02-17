#include<bits/stdc++.h>
using namespace std;


int count_subset_sum(int arr[],int s,int n,vector<vector<int>>dp)
{
    for(int i=0;i<n+1;i++)
    {
        for(int j=0;j<s+1;j++)
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
        for(int j=1;j<s+1;j++)
        {
            if(arr[i-1]<=j)
            {
              // this problem is almost simmilar to subset sum problem just a minute chnage is that
              // you simply count the no os subsets with sum you have given for this just 
              //replace or with + to count all subsets
                dp[i][j]= (dp[i-1][j-arr[i-1]] + dp[i-1][j]);
            }
            
            else
            {
                dp[i][j]=dp[i-1][j];
            }
        }
        
        
    }
    
    return dp[n][s];
}

int main()
{
    int arr[]={1, 2, 3, 3};
    //Second test case : 2,3,5,6,8,10 with sum s=10
    int n=sizeof(arr)/sizeof(arr[0]);
    int s=6;
    vector<vector<int>> dp(n+1,vector<int>(s+1,0));
    cout<<count_subset_sum(arr,s,n,dp)<<endl;
    return 0;
}
