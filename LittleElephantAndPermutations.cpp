#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        if(n==1)
        {
            int temp;
            cin>>temp;
            cout<<"YES"<<endl;
            
        }
        else{
            int in=0;
            int out=0;
            vector<int>v;
            int temp;
            for(int i=0;i<n;i++)
            {
                cin>>temp;
                v.push_back(temp);
            }
            for(int i=0;i<n;i++)
            {
                for(int j=i+1;j<n;j++)
                {
                    if(v[i]>v[j])
                    {
                        in++;
                    }
                }
            }
            
            for(int i=0;i<(n-1);i++)
            {
                if(v[i]>v[i+1])
                {
                    out++;
                }
            }
            if(in==out)
            {
                cout<<"YES"<<endl;
            }
            else
            {
                cout<<"NO"<<endl;
            }
        }
    }
    
	return 0;
}

/*
int n;
bool flag=true;
cin>>n;
for(int i=0;i<n;i++)
{
    int a ;
    cin>>a;
    if(abs(a-i-1)>1)
    flag=false;
    
}
if(flag==true)
{
cout<<"Yes"<<endl;
}
else{
    cout<<"No"<<endl;
}
*/

