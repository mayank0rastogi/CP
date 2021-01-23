
#include<bits/stdc++.h>
using namespace std;

void towerofhonoi(int n,char src, char dest, char helper)
{
    //base cse
    if(n==0)
    {

        return;
    }
    towerofhonoi(n-1,src,helper,dest);
    cout<<"Move from source"<<src<<"to destination"<<dest<<endl;
    towerofhonoi(n-1,helper,dest,src);
}

int main()
{
    towerofhonoi(3,'A','C','B');
    return 0;
}
