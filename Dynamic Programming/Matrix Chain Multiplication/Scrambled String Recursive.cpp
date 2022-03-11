/******************************************************************************

Scramble String using Recursion
Given a string s1, we may represent it as a binary tree by partitioning it to two non-empty substrings recursively.
Below is one possible representation of A = “great”:
 great
   /    \
  gr    eat
 / \    /  \
g   r  e   at
           / \
          a   t
To scramble the string, we may choose any non-leaf node and swap its two children.

For example, if we choose the node “gr” and swap its two children, it produces a scrambled string “rgeat”.

    rgeat
   /    \
  rg    eat
 / \    /  \
r   g  e   at
           / \
          a   t
We say that “rgeat” is a scrambled string of “great”.

Similarly, if we continue to swap the children of nodes “eat” and “at”, it produces a scrambled string “rgtae”.

    rgtae
   /    \
  rg    tae
 / \    /  \
r   g  ta  e
       / \
      t   a
We say that “rgtae” is a scrambled string of “great”.

*******************************************************************************/
#include <bits/stdc++.h>
using namespace std;

bool solve(string x, string y)
{
    
    
    //base condition checking whether if bot strings are equal or scrambled already of yes than return TRUE
    if(x.compare(y)==0)
    {
        return true;
    }
    
    //check if eiterh of string length is less than 1 or not if yes return false as it is not scrambled
    if(x.length()<=1 || y.length()<=1)
    {
        return false;
    }
    
    int n=x.length();
    bool f=false;
    
    for(int i=1;i<=n-1;i++)
    {
         if((solve(x.substr(0,i),y.substr(n-i,i)) && solve(x.substr(i,n-i),y.substr(0,n-i))) || (solve(x.substr(0,i),y.substr(0,i)) && solve(x.substr(i,n-i),y.substr(i,n-i))))
         {
             f=true;
             break;
         }
    }
    return f;
   
}
int main()
{
    string x="great";
    string y="rgtae";
  if(x.length()!=y.length())
    {
        cout<<"NO"<<endl;
    }
    else
    {
        solve(x, y) ? cout << "Yes\n" : cout << "No\n";
    }
    return 0;
}
