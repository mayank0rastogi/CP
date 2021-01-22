//Find the no of ways in which n friends can remain single or can be paired up

#include<bits/stdc++.h>
using namespace std;
int single_frnds(int n)
{

    if(n==0||n==1||n==2)
    {

        return n;
    }

    return single_frnds(n-1)+single_frnds(n-2)*(n-1);
}
int main()
{
    cout<<single_frnds(4)<<endl;
    return 0;
}
