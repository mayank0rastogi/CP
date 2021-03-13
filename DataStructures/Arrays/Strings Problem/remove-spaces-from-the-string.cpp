/******************************************************************************



*******************************************************************************/
#include <bits/stdc++.h>
using namespace std;

char *remove_spaces(char *str)
{
    int i=0,j=0;
    while(str[i])
    {
        if(str[i]!=' ')
        {
            str[j++]=str[i];
        }
        i++;
    }
    str[j]='\0';
    return str;
}

int main()
{
    char str1[] = "mik    e   "; 
    cout<<remove_spaces(str1)<<endl; 
  
    char str2[] = " m  ike "; 
    cout<<remove_spaces(str2); 
    return 0; 

    return 0;
}
