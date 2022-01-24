#include <bits/stdc++.h>

using namespace std;
int t;
int x,y,z;

int main() {
cin>>t;
while(t--)
{
    cin>>x>>y>>z;
    if(y<=x)
    {
        cout<<"PIZZA"<<endl;
    }
    else if(z<=x)
    {
        cout<<"BURGER"<<endl;
    }
    else
    {
        cout<<"NOTHING"<<endl;
    }
}

	return 0;
}
