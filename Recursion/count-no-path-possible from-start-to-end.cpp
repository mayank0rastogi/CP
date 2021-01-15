#include<bits/stdc++.h>
using namespace std;

int countPath(int s,int e)
{
    if(s==e)
    {

        return 1;
    }
    if(s>e){
        return 0;
    }
//misn computation
    int count=0;
    for(int i=0;i<=3;i++)
    {

        count+=countPath(s+i,e);
    }
    return count;
}
int main()
{

countPath(0,3);
   // cout<<countpath(0,3)<<endl;
    return 0;
}
