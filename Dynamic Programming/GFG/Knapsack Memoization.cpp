#include<bits/stdc++.h>
using namespace std;
int memorize_dp(int wt[],int val[],int W,int n,vector<vector<int>>K)
{
    
    //base conditon 
    if(n==0 || W==0)
    {
        return 0;
    }
    
    if(K[n][W]!=-1)
    {
        return K[n][W];
    }
    
    
    if(wt[n-1]>W)
    {
        // in this case we can't put it in the bag
        K[n][W]= memorize_dp(wt,val,W,n-1,K);
        return K[n][W];
        
    }
    else 
    {
        // int this case you have recursively call and choose whether in last element if we recursively call and add value to it or not
        K[n][W]= max(val[n-1]+memorize_dp(wt,val,W-wt[n-1],n-1,K),memorize_dp(wt,val,W,n-1,K));
        return K[n][W];
    }
}

//also do by defining another function 
// int knapsack(int wt[],int val[],int W,int n)
// {
//      vector<vector<int>> K(n + 1, vector<int>(W + 1,-1));
//      return memorize_dp(wt,val,W,n,K);
     
// }

int main()
{
    int wt[] = { 10, 20, 30 };
    int val[] = { 60, 100, 120 };
    int W = 50;
    int n = sizeof(val) / sizeof(val[0]);
    vector<vector<int>> K(n + 1, vector<int>(W + 1,-1));
    
    cout << memorize_dp(wt,val,W, n,K);
    
}
