/******************************************************************************

check the rpeatitive word in a string

*******************************************************************************/
#include<bits/stdc++.h>
using namespace std;
bool comapre_string(string s)
{
   for(int i=1;i<s.length();i++) 
   {
       if(s[i]!=s[0])
       {
           return false;
       }
       else return true;
   }
}

int main()
{
    
    
  string s="aaaaaaaaaa";
  if(comapre_string(s))
  {
      cout<<"Yes"<<endl;
  }
  else
  {
      cout<<"No"<<endl;
  }

    return 0;
}
