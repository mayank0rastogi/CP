#include<bits/stdc++.h>
using namespace std;
string LCSPrint(string s1,string s2,int n,int m,vector<vector<int>>dp)
{
    
    string s="";
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
                dp[i][j]=dp[i-1][j-1]+1;
            }
            
            else
            {
                dp[i][j]=max(dp[i][j-1],dp[i-1][j]);
            }
        }
    }
    
    int a=n,b=m;
    while(a>0 && b>0)
    {
        if(s1[a-1]==s2[b-1])
        {
            s.push_back(s1[a-1]);
            a--;//diagonally move
            b--;//diagonally move
        }
        
        else
        {
            if(dp[a][b-1]>dp[a-1][b])
            {
                b--;//move to the left
            }
            else
            {
                a--;// move to upward 
            }
        }
    }
    
    reverse(s.begin(),s.end());
    return s;
}
int main()
{
    string s1="ABCDGH";
    string s2="AEDFHR";
    int n=s1.size();
    int m=s2.size();
    
    vector<vector<int>>dp(n+1,vector<int>(m+1,0));
    
    cout<<LCSPrint(s1,s2,n,m,dp)<<endl;
}
