#include <bits/stdc++.h>
using namespace std;
int no;
// time ~ 60 ms
int main()
{
    cin>>no;
    int i,o,minpossible=0,total=0;
    while(no--)
    {
        cin>>o>>i;
        total=total-o;
        total=total+i;
        
        if(total>minpossible)
        {
            minpossible=total;
        }
    }
    cout<<minpossible<<endl;

    return 0;
}
