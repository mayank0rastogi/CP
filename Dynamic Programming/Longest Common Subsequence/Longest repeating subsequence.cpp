#include<bits/stdc++.h>
using namespace std;

int LRS(string s1,string s2,int n,int m,vector<vector<int>>dp)
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
            if(s1[i-1]==s2[j-1] && i!=j)
            {
                dp[i][j]=1+dp[i-1][j-1];
            }
            
            else
            {
                dp[i][j]=max(dp[i][j-1],dp[i-1][j]);
            }
        }
    }
    
    return dp[n][m];
}

int main()
{
    string s1="AABEBCDD";
    string s2=s1;
    int n=s1.size();
    int m=s2.size();
    vector<vector<int>>dp(n+1,vector<int>(m+1,0));
    
    cout<<LRS(s1,s2,n,m,dp)<<endl;
}
