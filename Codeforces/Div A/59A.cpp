#include <bits/stdc++.h>
using namespace std;
string st;
int c=0;
int main()
{
    cin>>st;
    
    for(int i=0;i<st.size();i++)
    {
        if(isupper(st[i]))
        {
            c++;
        }
        
    }
    
   if(c>st.size()/2)
   {
       transform(st.begin(),st.end(),st.begin(),::toupper);
   }
   
   else
   {
       transform(st.begin(),st.end(),st.begin(),::tolower);
   }
 
cout<<st<<endl;
    return 0;
}
