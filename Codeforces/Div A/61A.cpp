
#include <bits/stdc++.h>

using namespace std;

int main()
{
    string t1,t2,t3="";
    cin>>t1>>t2;
    for(int i=0;i<t1.size();i++)
    {
         if(t1[i]==t2[i])
         {
             t3=t3+'0';
         }
         else
         {
             t3=t3+'1';
         }
    }
   
    cout<<t3<<endl;

    return 0;
}
