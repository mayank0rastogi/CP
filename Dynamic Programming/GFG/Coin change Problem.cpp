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

int coin_change(int coin[],int n,int sum,vector<vector<int>>dp)
{
    // from line 18 to 33 we initialize our base conditions which we do when we silve dp  using recursion and memorization 
    for(int i=0;i<n+1;i++)
    {
        for(int j=0;j<sum+1;j++)
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
        for(int j=1;j<sum+1;j++)
        {
            if(coin[i-1]<=j)
            {
                // * NOTE *
                //dp[i] (in our includng case) is converting our count subset sum program helps to solve coin change problem
                dp[i][j]= (dp[i][j-coin[i-1]]+dp[i-1][j]);
            }
            
            else
            {
                dp[i][j]=dp[i-1][j];
            }
        }
    }
    
    return dp[n][sum];
}

int main()
{
    int coin[]={1,2,3};
    int n=sizeof(coin)/sizeof(coin[0]);
    int sum=5;
    vector<vector<int>>dp(n+1,vector<int>(sum+1,0));
    cout<<coin_change(coin,n,sum,dp)<<endl;
    return 0;
    
}
