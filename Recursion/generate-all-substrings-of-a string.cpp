


#include<bits/stdc++.h>
using namespace std;

void subsequence(string s,string ans)
{

    if(s.length()==0)//base case
    {
       cout<<ans<<endl;
        return ;

    }
//recursive call
   char ch=s[0];//store first character and find rest of substring
   string ros= s.substr(1);

   subsequence(ros,ans);
   subsequence(ros,ans+ch);
}
int main()
{
    subsequence("ABC","");
    cout<<endl;
    return 0;
}
