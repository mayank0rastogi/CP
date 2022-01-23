
#include <bits/stdc++.h>
using namespace std;
//  cost of first banana ~ f_b_c
//  initial banana he has ~ in_he_ha
//  no of banana buys ~ no_b_bu
int f_b_c,in_he_ha,no_b_bu;

int main()
{
    cin>>f_b_c>>in_he_ha>>no_b_bu;
    
    
    int sum=0;
    
    for(int i=1;i<=no_b_bu;i++)
    {
        sum+=i*f_b_c;
    }
    
    // cout<<"Which is our total sum to buy 4 bananas-> "<<sum<<endl;
    
    if(sum<=in_he_ha)
    {
        cout<<0<<endl;
    }
    
    else
    {
        cout<<sum-in_he_ha<<endl;
    }
    
    

    return 0;
}

