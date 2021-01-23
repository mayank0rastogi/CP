




#include<bits/stdc++.h>
using namespace std;

string keyarr []={"","","abc","def","ghi","jkl","mno","pqr","stu","vwx","yz"};

void keypad(string s,string ans)
{

    if(s.length()==0)//base case
    {
       cout<<ans<<endl;
        return ;

    }
//recursive call
   char ch=s[0];//store first character and find rest of substring
   //finding asccii code for a particular character
   string  code=keyarr[ch-'0'];//ch is arr and we want to sent integer  soo convert char to integer so ) character ascci minus which ch and get integer

   string ros= s.substr(1);

   for(int i=0;i<code.length();i++)

   {
       //traverse upto the length of code of all letters

       keypad(ros,ans+code[i]);//adding every word to ans
   }

}
int main()
{
    cout<<"Welcome to Virtual keyboard of mobile!!!"<<endl;
    cout<<"Type the no you want to see the possible ways combination:"<<endl;
    keypad("23","");
    cout<<endl;
    return 0;
}
