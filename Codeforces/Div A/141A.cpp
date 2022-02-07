#include<bits/stdc++.h>
using namespace std;

int main()
{
    string a,b,c,final;
    cin>>a>>b>>c;
    final=a+b;
    sort(final.begin(),final.end());
    
    sort(c.begin(),c.end());
    
    if(final==c){
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
    return 0;
}
