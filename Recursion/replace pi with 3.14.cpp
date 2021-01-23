
#include<bits/stdc++.h>
using namespace std;

void replace_pi(string s)
{

    if(s.length()==0)//base case
    {

        return;

    }
//recursive call
    if(s[0]=='p' &&s[1]=='i')
    {

        cout<<"3.14";
        replace_pi(s.substr(2));
    }
    else{
        cout<<s[0];
        replace_pi(s.substr(1));

    }

}
int main()
{
    replace_pi("pipppiiipipi");
    return 0;
}
