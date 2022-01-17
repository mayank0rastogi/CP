#include<bits/stdc++.h>
using namespace std;
int l,b,c=0;

int main()
{
    cin>>l>>b;
    
    if(l>b)
    {
        c=0;
    }
    else
    {
          while(l<=b)
        {
            l=l*3;//12//36
            b=b*2;//18//36
            c+=1;
        }
    }
    
    
    
    cout<<c<<endl;

    return 0;
}
