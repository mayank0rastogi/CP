#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int t;
    cin>>t;
    while(t--)
    {
        int X,Y;
        cin>>X>>Y;
        if(Y==0)
        {
            cout<<X<<endl;
        }
        else if(X>Y)
        {
            int res=X-Y;
            res=res+Y*2;
            cout<<res<<endl;
        }
        else if(X==Y)
        {
            Y=(Y*2)-1;
            cout<<Y<<endl;
        }
    }
	// your code goes here
	return 0;
}
