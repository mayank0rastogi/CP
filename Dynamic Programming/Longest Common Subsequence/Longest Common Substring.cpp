#include<bits/stdc++.h>
using namespace std;

int LCSubstring(string s1,string s2,int n,int m,vector<vector<int>>dp)
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
    int res=0;
    for(int i=1;i<n+1;i++)
    {
        for(int j=1;j<m+1;j++)
        {
            
            if(s1[i-1]==s2[j-1])
            {
                dp[i][j]=dp[i-1][j-1]+1;
                res = max(res, dp[i][j]);
            }
            
            else
            {
                dp[i][j]=0;
            }
        }
    }
    return res;
}

int main()
{
    string s1="GeeksforGeeks";
    string s2="GeeksQuiz";
    int n=s1.size();
    int m=s2.size();
    vector<vector<int>>dp(n+1,vector<int>(m+1,0));
    
    cout<<LCSubstring(s1,s2,n,m,dp)<<endl;
    return 0;
}
