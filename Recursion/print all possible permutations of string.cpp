//print all permutations of a  string
#include<bits/stdc++.h>
using namespace std;

void permutations(string s,string ans)
{
if(s.length()==0)
{
    cout<<ans<<endl;
    return;
}
for(int i=0;i<s.length();i++)
{

    char ch=s[i];//string the first character
    string ros=s.substr(0,i)+s.substr(i+1);//example if we take abc thta 0 se 1 belongs tp a //i+1 is equal to 2 index that is c
    permutations(ros,ans+ch);

}
}

int main()
{

    permutations("ABC","");
    return 0;
}
