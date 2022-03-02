/*
Problem--
Minimum number of deletions and insertions to transform one string into another
Given two strings ‘str1’ and ‘str2’ of size m and n respectively. The task is to remove/delete 
and insert minimum number of characters from/in str1 so as to transform it into str2. 
It could be possible that the same character needs to be removed/deleted from one point of str1 and inserted 
to some another point.
*/

#include<bits/stdc++.h>
using namespace std;

int LCS(string s1,string s2,int n,int m,vector<vector<int>>dp)
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
    
    return dp[n][m];
    
    
}

int main()
{
    // s1="heap";
    // s2="pea";
    string s1="geeksforgeeks";
    string s2="geeks";
    int n=s1.size();
    int m=s2.size();
    vector<vector<int>>dp(n+1,vector<int>(m+1,0));
    
    int lcs=LCS(s1,s2,n,m,dp);
    int min_no_of_insertions=n-lcs;
    int min_no_of_deletions=m-lcs;
    
    cout<<min_no_of_insertions<<" "<<min_no_of_deletions<<endl;
}
