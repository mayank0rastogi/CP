#include<bits/stdc++.h>
using namespace std;
const int D=101;
int dp[D][D];


int egg_dropping(int egg,int flor)
{
    if(flor==0 || flor==1)
    {
        return flor;
    }
    
    if(egg==1)
    {
        return flor;
    }
    
    if(dp[egg][flor]!=-1)
    {
        return dp[egg][flor];
    }
    
    
    int mn=INT_MAX;
    
    for(int k=1;k<=flor;k++)
    {
        // here we optmized our previous memorization version into more 
        //by considering the fact that we did not check the inner function call previously which is 
        // max(egg_dropping(),egg_dropping()) as in our previous code this line blindly calls 
        // all the functions before checking whether it can solved previously or not for this we checked internally by splitting both
        // the functions
        int bottom,upp;
        
        if(dp[egg-1][k-1]!=-1)
        {
            bottom=dp[egg-1][k-1];
        }
        else
        {
            bottom=egg_dropping(egg-1,k-1);
            dp[egg-1][k-1]=bottom;
        }
        
         if(dp[egg][flor-k]!=-1)
        {
            upp=dp[egg][flor-k];
        }
        else
        {
            upp=egg_dropping(egg,flor-k);
            dp[egg][flor-k]=upp;
        }
        int tmp=1+max(bottom,upp);
        
        mn=min(tmp,mn);
        
    }
    return dp[egg][flor]=mn;
}

int main()
{
    int egg=2;
    int flor=4;
    memset(dp,-1,sizeof(dp));
    cout<<egg_dropping(egg,flor)<<endl;
    
    return 0;
}
