//Question
// Coin Change Problem Minimum Numbers of coins
// Given a value V, if we want to make change for V cents, and we have infinite supply of each of C = { C1, C2, .. , Cm} 
//valued coins, what is the minimum number of coins to make the change?
// Example:

// Input: coins[] = {25, 10, 5}, V = 30
// Output: Minimum 2 coins required
// We can use one coin of 25 cents and one of 5 cents 
//Find minimum number of coins that make a given value V


#include<bits/stdc++.h>
using namespace std;

int min_coin_needed(int coin[],int n,int sum,vector<vector<int>>dp)
{
    for(int i=0;i<n+1;i++)
    {
        for(int j=0;j<sum+1;j++)
        {
            
            
            //this case is chnages in this problem as we have 0 coins and to make different sum value we need infinite values that'
            //why initialize it to sum maximum value
            if(i==0)
            {
                // we are storing INT_MAX-1 bcoz we know that INT_MAX+1 is -ve value that's why I have -1 in INT_MAX as below i have do +1 so that value become 
                //INT_MAX not become -ve 
                dp[i][j]=INT_MAX-1;
            }
            // this case is changed in this problem as minimum no of coins needed to make sum 0 is 0 that why initialize all to zeo
             if(j==0)
            {
                dp[i][j]=0;
            }
            
           
        }
    }
    
    // this is the case , suppose you have given 1 element in coin array i.e, 3 and you need sum 4 so that is not possible 
    // for this case initialize that block into sum big no 
    // we run this program for only 2nd row i,e i=1
    for(int j=1;j<sum+1;j++)
    {
        if(j/coin[0]==0)
        {
            dp[1][j]=j/coin[0];
        }
        
        else
        {
            dp[1][j]=INT_MAX-1;
        }
    }
    
    
    for(int i=1;i<n+1;i++)
    {
        for(int j=1;j<sum+1;j++)
        {
            if(coin[i-1]<=j)
            {
                dp[i][j]= min(dp[i][j-coin[i-1]]+1,dp[i-1][j]);
            }
            else
            {
                dp[i][j]=dp[i-1][j];
            }
        }
    }
    
    
    for(int i=0;i<n+1;i++)
    {
        for(int j=0;j<sum+1;j++)
        {
            cout<<dp[i][j]<<" ";
        }
        cout<<endl;
    }
    
    return dp[n][sum];
}

int main()
{
    int coin[]={9, 6, 5, 1};
    int n=sizeof(coin)/sizeof(coin[0]);
    int sum=11;
    vector<vector<int>>dp(n+1,vector<int>(sum+1,0));
    cout<<min_coin_needed(coin,n,sum,dp);
    return 0;
    
}
