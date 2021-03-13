/******************************************************************************


*******************************************************************************/
#include <bits/stdc++.h>
using namespace std;

string repezt(string s,int n)
{
    string s1=s;
    for(int i=0;i<n;i++)
    {
        s+=s1;
    }
    
    return s;
}

int main()
{
    string s="miky mouse ";
    int n=4;
    cout<<repezt(s,n);
    return 0;

}
