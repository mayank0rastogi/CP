#include<bits/stdc++.h>
#include <iostream>
using namespace std;

int main() {
    char s[26],ch[13];
    cin>>s;
    int t;
    cin>>t;
    while(t--){
        cin>>ch;
        int c=0;
        for(int i=0;i<strlen(s);i++)
        {
            for(int j=0;j<strlen(ch);j++)
            {
                if(ch[j]==s[i])
                {
                    c++;
                }
            }
        }
        if(c==strlen(ch))
        cout<<"Yes"<<endl;
        else
        cout<<"No"<<endl;
    }
	// your code goes here
	return 0;
}