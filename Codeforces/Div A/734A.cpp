
#include <bits/stdc++.h>
using namespace std;
int no_games;
string s;

int main()
{
    cin>>no_games>>s;
    int anton=0,danik=0;
    for(int i=0;i<no_games;i++)
    {
        
        if(s[i]=='A')
        {
            anton++;
        }
        else
        {
            danik++;
        }
        
        
        
    }
    
    if(anton==danik)
    {
        cout<<"Friendship"<<endl;
    }
    else if(anton>danik) 
    {
        cout<<"Anton"<<endl;
    }
    else
    {
        cout<<"Danik"<<endl;
    }
    

    return 0;
}

