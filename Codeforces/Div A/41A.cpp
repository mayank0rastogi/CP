#include <bits/stdc++.h>
using namespace std;

string s1,s2;


int main()
{
    cin>>s1>>s2;
    
    reverse(s2.begin(),s2.end());
    
    if(s1==s2)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
    

    return 0;
}
