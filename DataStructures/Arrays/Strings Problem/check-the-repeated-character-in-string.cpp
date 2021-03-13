/*********//*********************************************************************



*********************************//**********************************************/
#include <bits/stdc++.h>
using namespace std;

char find_extracharacter(string str1,string str2)
{
    unordered_map<char,int>ump;
    
    for(int i=0;i<str2.length();i++)
    {
        ump[str2[i]]++;
    }
    
    for(int i=0;i<str1.length();i++)
    {
        ump[str1[i]]--;
    }
    
    for(auto i=ump.begin();i!=ump.end();i++)
    {
        if(i->second==1)
        {
            return i->first;
        }
    }
}
int main()
{
    string str1 = "abcd"; 
    string str2 = "cbdad"; 
  
    // find Extra Character 
    cout <<find_extracharacter(str1, str2); 
   

    return 0;
}
