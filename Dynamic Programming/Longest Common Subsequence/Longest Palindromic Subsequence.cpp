/*
Problem--

*/

#include<bits/stdc++.h>
using namespace std;

int LPS(string s1,string s2,int n,int m,vector<vector<int>>dp)
{
    //base condition
    for(int i=0;i<n+1;i++)
    {
        for(int j=0;j<m+1;j++)
        {
            if(i==0 || j==0)
            {
                dp[i][j]=0;
            }
        }
    }
    
    
    for(int i=1;i<n+1;i++)
    {
        for(int j=1;j<m+1;j++)
        {
            if(s1[i-1]==s2[j-1])
            {
                dp[i][j]=1+dp[i-1][j-1];
            }
            
            else
            {
                dp[i][j]=max(dp[i][j-1],dp[i-1][j]);
            }
        }
    }
    
    // for(int i=0;i<n+1;i++)
    // {
    //     for(int j=0;j<m+1;j++)
    //     {
    //         cout<<dp[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }
    
    return dp[n][m];
    
    
}

int main()
{
    
    // string s1="agbcba";
    string s1="bbbab";
    // cout<<s1<<endl;
    
    string s2= s1;
    reverse(s2.begin(),s2.end());
    // cout<<s2<<endl;
    int n=s1.size();
    int m=s2.size();
    vector<vector<int>>dp(n+1,vector<int>(m+1,0));
    
    
    
    
    
    cout<<LPS(s1,s2,n,m,dp)<<endl;
    
    
}
