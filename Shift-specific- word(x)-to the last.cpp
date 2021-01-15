

#include<bits/stdc++.h>
using namespace std;

string shift_all_x_to_the_last(string s)
{

    if(s.length()==0)//base case
    {

        return "";

    }
//recursive call
  char ch=s[0];//store first character
   string ans= shift_all_x_to_the_last(s.substr(1));

   if(ch=='x')//compare ist character to rest of string if matches than returj ans
   {
       return ans+ch;

   }

    return ch+ans;
}
int main()
{
    cout<<shift_all_x_to_the_last("xpipxpxxxpiixipixpix");
    return 0;
}
