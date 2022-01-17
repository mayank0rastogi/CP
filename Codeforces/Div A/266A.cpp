#include<bits/stdc++.h>
using namespace std;
string s;
int a,b=0;

int main()
{
    cin>>a>>s;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]==s[i+1])
        {
            b++;
        }
    }
    
    cout<<b;
    return 0;
}
