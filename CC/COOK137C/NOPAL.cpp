#include <bits/stdc++.h>
using namespace std;
int t,n;

int main() {

cin>>t;

while(t--)
{
    string s="";
    cin>>n;
    char curr='a';
    for(int i=0;i<n;i++)
    {
        // cout<<"value of curr "<<curr<<endl;
        s=s+curr;
        // cout<<"value of s + curr "<<s<<endl;
        curr++;
        
        
        if(curr=='d')
        {
            curr='a';
        }
    }
    cout<<s<<endl;
        
}
	return 0;
}
