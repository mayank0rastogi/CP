#include <bits/stdc++.h>

using namespace std;

int LCS(string s1,string s2,int n,int m,vector<vector<int>>dp)
{
    
    
    //Base Condition
    if(n==0 || m==0)
    {
        return 0;
    }
    
    if(dp[n][m]!=-1)
    {
        return dp[n][m];
    }
    
    // choice diagram condition 
    
    if(s1[n-1]==s2[m-1])
    {
        dp[n][m] = 1+LCS(s1,s2,n-1,m-1,dp);
        return dp[n][m];
    }
    else
    {
        dp[n][m] = max(LCS(s1,s2,n,m-1,dp),LCS(s1,s2,n-1,m,dp));
        return dp[n][m];
    }
    
  
    
}

int main()
{
    string s1="ABCDGH";
    int n=s1.size();
    string s2="AEDFHR";
    int m=s2.size();
    vector<vector<int>>dp(n+1,vector<int>(m+1,-1));
    cout<<LCS(s1,s2,n,m,dp)<<endl;

    return 0;
}
