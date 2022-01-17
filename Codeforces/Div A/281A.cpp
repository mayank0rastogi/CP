#include <bits/stdc++.h>
using namespace std;

int main()
{
    char s;
     int flag=0;
    while(cin>>s)
    {
           
            if(!flag)
            {
                cout<<(char)toupper(s);
                flag=1;
            }
            else
            {
                cout<<s;
            }

        
    }
    
   
    return 0;
}
