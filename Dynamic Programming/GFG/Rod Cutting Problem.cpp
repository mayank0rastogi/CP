#include<bits/stdc++.h>
using namespace std;

int rod_cutting(int price[],int n,int N,int len[],vector<vector<int>>dp)
{
    if(n==0)
    {
        return 0;
    }
    
    if(N==0)
    {
        return 0;
    }
    
    if(dp[n][N]!=-1)
    {
        return dp[n][N];
    }
    
    if(len[n-1]<=N)
    {
        // *note here the price of rod + including other piece by calling rod_cutting function we pass "n"
        //instead of "n-1" because he again see the best possible case to condier
        // which also shows multiple occurence
        dp[n][N]=max(price[n-1]+rod_cutting(price,n,N-len[n-1],len,dp),rod_cutting(price,n-1,N,len,dp));
        return dp[n][N];
    }
    
    else
    {
        dp[n][N]=rod_cutting(price,n-1,N,len,dp);
        return dp[n][N];
    }
    
    
     
    
}

int main()
{
    
    //*Note*
    //here this problem is state as unbound kanpsack insted of 0/1 kanpsack howerever it is completely 
    //simmilar to 0/1 knapsack howerver just a difference is that it takes multiple occurence of single length
    //of rod howerver in 0/1 knapsack it takes only 1 times
    //This is simmilar to knapsack problem just twisting of charcter name in a problem
    //Like value array in knapsack here named as price array
    //weight array in knapsack is behave here as len array that consist of different length of rods
   //and wight in knapsack is behave here as total length of rod i.e is in this case basically the size of length array
   //dp 2d-array is here to store previous calculating result(called memorization) 
    int price[]={1,5,8,9,10,17,17,20};
    int n = sizeof(price)/sizeof(price[0]);
    int len[n];
    for(int i=0;i<n;i++)
    {
        len[i]=i+1;
    }
    int N=n;
    vector<vector<int>> dp(n+1,vector<int>(N+1,-1));
    cout<<rod_cutting(price,n,N,len,dp)<<endl;
    
    return 0;
}
