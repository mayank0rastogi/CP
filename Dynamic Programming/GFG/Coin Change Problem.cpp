//PROBLEM
// Coin Change Problem Maximum Number of ways
// Given a value N, if we want to make change for N cents, 
// and we have infinite supply of each of S = { S1, S2, .. , Sm} 
// valued coins, how many ways can we make the change? The order of coins doesn’t matter.

//--------------------------------------------------------------------------------------------------------------------------------------------

// * NOTE * --> This prolem solved using unbound knapsack not by 0/1 knapsack 
// reason behind this is that as we need of multiple occurence for particular element to get the best possible reuslt 

// it is basically the count subset sum problem why i am saying this bcoz it takes same input just the name change arr into coin array
// and other major change you feel is that in this i have used unbound knapsack concept which I explain above and in my previous 
//code also
#include<bits/stdc++.h>
using namespace std;

int coin_change(int coin[],int n,int sum,vector<vector<int>> &dp)
{
    //Base Condition
    if(n==0) 
    {
        return 0;
    }
    if(sum==0)
    {
        //simply retur 1 or you can store in dp array
        dp[n][sum]=1;
    }
    
    if(dp[n][sum]!=-1)
    {
        return dp[n][sum];
    }
    
    
    
  
    if(coin[n-1]<=sum)
       {
            // * NOTE *

            // Either Pick this coin or not
            dp[n][sum]= coin_change(coin,n,sum-coin[n-1],dp)+coin_change(coin,n-1,sum,dp);
            return dp[n][sum];
       }
        
    else
       {
           // We have no option but to leave this coin
            dp[n][sum]=coin_change(coin,n-1,sum,dp);
            return dp[n][sum];
       }
         
         
        
    
}

int main()
{
    int coin[]={1,2,3};
    int n=sizeof(coin)/sizeof(coin[0]);
    int sum=5;
    vector<vector<int>>dp(n+1,vector<int>(sum+1,-1));
    cout<<coin_change(coin,n,sum,dp)<<endl;
    //  for(int i=0;i<n+1;i++)
    //      {
    //          for(int j=0;j<sum+1;j++)
    //          {
    //              cout<<dp[i][j]<<" ";
    //          }
    //          cout<<endl;
    //      }
    return 0;
    
}
