

#include<bits/stdc++.h>
using namespace std;

string remove_duplicate(string s)
{

    if(s.length()==0)//base case
    {

        return "";

    }
//recursive call
char ch=s[0];//store first character
   string ans= remove_duplicate(s.substr(1));

   if(ch==ans[0])//compare ist character to rest of string if matches than returj ans
   {
       return ans;

   }

    return (ch+ans);
}
int main()
{
    cout<<remove_duplicate("pipppiiipipi")<<"\n";
    cout<<remove_duplicate("pppiqqqwwwvss");
    return 0;
}
