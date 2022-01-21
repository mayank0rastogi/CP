#include <bits/stdc++.h>
using namespace std;
 
int no,k;
int main()
{
    cin>>no>>k;
    
    while(k--)
    {
        
        
        if(no%10==0)
        {
            no=no/10;
        }
        else
        {
            no=no-1;
        }
        // cout<<no<<" 1 inter ..."<<endl;
        
    }
    cout<<no<<endl;
 
    return 0;
}
