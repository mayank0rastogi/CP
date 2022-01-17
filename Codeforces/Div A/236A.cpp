#include<bits/stdc++.h>
using namespace std;
string s;
int b=0;

int main()
{
    set<char>distinct;
    
    cin>>s;
    for(int i=0;i<s.size();i++)
    {
        distinct.insert(s[i]);
        
    }
    
   if(distinct.size()%2==0)
   {
       cout<<"CHAT WITH HER!";
   }
   else
   {
       cout<<"IGNORE HIM!";
   }
    

    return 0;
}
