
// Problem Link: https://codeforces.com/problemset/problem/110/A

#include <bits/stdc++.h>
using namespace std;
long long no;
int c=0;

int main()
{
    cin>>no;
    while(no!=0)
    {
        if(no%10==4 || no%10==7)
        {
            c++;
        }
        no/=10;
    }
    
    if(c==4 || c==7)
    {
        cout<<"YES"<<endl;
    }
    
    else
    {
        cout<<"NO"<<endl;
    }
    
    return 0;
}
