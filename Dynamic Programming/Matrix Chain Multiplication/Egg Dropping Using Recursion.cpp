/******************************************************************************

Problem statement: You are given N floor and K eggs. You have to minimize the number of times you have to drop the eggs to find the critical floor where critical floor means the floor beyond which eggs start to break. Assumptions of the problem:

If egg breaks at ith floor then it also breaks at all greater floors.
If egg does not break at ith floor then it does not break at all lower floors.
Unbroken egg can be used again.
Note: You have to find minimum trials required to find the critical floor not the critical floor.

Example:
Input:
    4
    2
    
    Output:
    Number of trials when number of eggs is 2 and number of floors is 4: 3

*******************************************************************************/
#include <bits/stdc++.h>
using namespace std;

int egg_dropping(int e,int f)
{
    
    if(f==0 || f==1)
    {
        return f;
    }
    
    if(e==1)
    {
        return f;
    }
    
    int mn=INT_MAX;
    for(int k=1;k<=f;k++)
    {
        //// once egg break means decrement both floor and egg 
        //// and when egg did not break means check egg dropping from above floor
        //  max denotes worst case we look for worst case where maximum attempt taken place we have to choose this one by  using max
        // one function call for when egg break and another condition for when does'nt broke
        int tmp=1+max(egg_dropping(e-1,k-1),egg_dropping(e,f-k));
        mn=min(tmp,mn);
    }
    return mn;
    
}
int main()
{
    int e=2;
    int f=4;
    cout<<egg_dropping(e,f)<<endl;
   

    return 0;
}
