#include <bits/stdc++.h>
using namespace std;
int a ,f;
int main()
{
    cin>>a;
    f=a/5;
    
    if(a%5>0)
    {
        f++;
    }
    cout<<f<<endl;
    return 0;
}
