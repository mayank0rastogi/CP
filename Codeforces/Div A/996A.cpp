#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n;
    cin>>n;
    int c=0;
    while(n)
    {
        if(n>=100)
        {
            c++;
            n=n-100;
        }
        else if(n>=20)
        {
            c++;
            n=n-20;
        }
        else if(n>=10)
        {
            c++;
            n=n-10;
        }
        else if(n>=5)
        {
            c++;
            n=n-5;
        }
        else
        {
            c++;
            n=n-1;
        }
        
    }
    
    cout<<c<<endl;
    return 0;
}
