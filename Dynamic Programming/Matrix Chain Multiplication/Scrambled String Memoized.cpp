
#include <bits/stdc++.h>
using namespace std;

unordered_map<string,bool>ump;

bool solve(string x,string y)
{
    if(x.compare(y)==0)
    {
        return true;
    }
    if(x.length()<=1 || y.length()<=1)
    {
        return false;
    }
    
   // creating a key for checking in ump whether it is present or not
    string key=x;
    key.push_back('$');
    key.append(y);
    
    
    if(ump.find(key)!=ump.end())
    {
        return ump[key];
    }
    
    bool f=false;
    int n=x.length();
    
    for(int i=1;i<=n-1;i++)
    {
        //// these are two condition for swapping and not swapping the string 
        
        if((solve(x.substr(0,i),y.substr(n-i,i)) && solve(x.substr(i,n-i),y.substr(0,n-i))) || (solve(x.substr(0,i),y.substr(0,i)) && solve(x.substr(i,n-i),y.substr(i,n-i))))
        {
            f=true;
            break;
        }
    }
    ump[key]=f;
    return ump[key];
}
int main()
{
   string x="great";
   string y="grate";
   
   if(x.length()!=y.length())
   {
       cout<<"NO"<<endl;
   }
   else
   {
       solve(x,y)?cout<<"YES\n" : cout<<"NO\n";
   }

    return 0;
}
