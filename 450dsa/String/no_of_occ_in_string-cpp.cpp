/******************************************************************************



*******************************************************************************/
#include<bits/stdc++.h>
#define ascii_charac 256
using namespace std;



char get_occurence_of_character(char* str)
{
    int count[ascii_charac]={0};
    int len = strlen(str);
    int max=0;
    char result;
    
    for(int i=0;i<len;i++)
    {
        count[str[i]]++;
        if(max < count[str[i]])
        {
            max=count[str[i]];
            result =str[i];
        }
        
    }
    return result;
    
}
int main()
{
   char str[]="sample string";
   cout<<"maximum occuring character is "<<get_occurence_of_character(str)<<endl;
    return 0;
}
