#include<bits/stdc++.h>
using namespace std;

string LCS(string s1,string s2,int n,int m,vector<vector<int>>dp)
{
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
    
    string s="";
    int a=n;
    int b=m;
    
    while(a>0 && b>0)
    {
        if(s1[a-1]==s2[b-1])
        {
            s.push_back(s1[a-1]);
            a--;
            b--;
        }
        
        else
        {
            if(dp[a][b-1]>dp[a-1][b])
            {
                s.push_back(s2[b-1]);
                b--;
                
            }
            
            else
            {
                s.push_back(s1[a-1]);
                a--;
            }
        }
    }
    
    
    while(a>0)
    {
        s.push_back(s1[a-1]);
        a--;
    }
    
     while(b>0)
    {
        s.push_back(s2[b-1]);
        b--;
    }
    reverse(s.begin(),s.end());
    return s;
}

int main()
{
    string s1="AGGTAB";
    string s2="GXTXAYB";
    int n=s1.size();
    int m=s2.size();
    
    vector<vector<int>>dp(n+1,vector<int>(m+1,0));
    
    
    cout<<LCS(s1,s2,n,m,dp)<<endl;
    
    return 0;
}
