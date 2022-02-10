#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int t;
    cin>>t;
    while(t--)
    {
        int p;
        int res;
        cin>>p;
        // int rem=p%2;
        if(p%2==0)
        {
            res=p/2;
        //   cout<<res<<endl;
            res=res+1;
           
        }
        else
        {
            res=p/2;
           
            res=res+1;
             
        }
        cout<<res<<endl;
    }
	// your code goes here
	return 0;
}
