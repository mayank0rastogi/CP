#include<bits/stdc++.h>
using namespace std;
int tilling_ways(int n)
{

    if(n==0)
    {

        return 0;
    }
    if(n==1)
    {
        return 1;

    }
    return tilling_ways(n-1)+tilling_ways(n-2);
}
int main()
{
    cout<<tilling_ways(3)<<endl;
    return 0;
}
