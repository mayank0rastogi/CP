#include<bits/stdc++.h>
using namespace std;


int MCM(int arr[],int i,int j,vector<vector<int>>dp)
{
    if(i>=j)
    {
        return 0;
    }
    
    if(dp[i][j]!=-1)
    {
        return dp[i][j];
    }
    int mn=INT_MAX;
    
    for(int k=i;k<=j-1;k++)
    {
        int temp=MCM(arr,i,k,dp)+MCM(arr,k+1,j,dp)+arr[i-1]*arr[j]*arr[k];
        
        if(temp<mn)
        {
            mn=temp;
        }
    }
    
    return dp[i][j]=mn;
}
int main()
{
    int arr[]={1,2,3,4,3};
    int n=sizeof(arr)/sizeof(arr[0]);
    vector<vector<int>> dp(1001,vector<int>(1001,-1));
    cout<<MCM(arr,1,n-1,dp)<<endl;
}

