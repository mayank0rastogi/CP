/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <bits/stdc++.h>
using namespace std;

#define no_chars 256

bool can_form_palindrome(string strr)
{
    int count[no_chars]={0};
    for(int i=0; strr[i] ;i++)
    {
        count[strr[i]]++;
        
    }
    int odd=0;
    for(int i=0;i<no_chars;i++)
    {
        if(count[i] & 1)
        {
            odd++;
        }
        if(odd>1)
        {
            return false;
        }
    }
    return true;
}


int main()
{
    can_form_palindrome("geekforgeeks")?cout<<"Yes\n":cout<<"No \n";
    can_form_palindrome("geeksogeeks")?cout<<"Yes\n":cout<<"No \n";

    return 0;
}
