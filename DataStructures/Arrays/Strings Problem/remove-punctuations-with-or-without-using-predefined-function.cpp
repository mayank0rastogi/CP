/******************************************************************************



*******************************************************************************/
#include <bits/stdc++.h>
using namespace std;
int main()
{
   string str="Welcome???@@##$ to#$% Geeks%$^for$%^&Geeks";
   for(int i=0;i<str.length();i++)
   {
       if(str[i]=='?'||str[i]=='#'||str[i]=='@'||str[i]=='^'||str[i]=='%'||str[i]=='$'||str[i]=='&')
       //if(ispunct(str[i]))
       {
           str.erase(i--,1);
           
       }
   }

cout<<str<<endl;
    return 0;
}
