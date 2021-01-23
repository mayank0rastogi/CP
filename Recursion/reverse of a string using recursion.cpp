#include<bits/stdc++.h>
using namespace std;

void reverse_string(string s)
{

    if(s.length()==0)//base case
    {

        return;

    }
    string ros = s.substr(1);//basically after index 1 rest string will come in ros
    //substr is given the rest string after than index
    reverse_string(ros);
    cout<<s[0];
}
int main()
{
    reverse_string("binod");
    return 0;
}
