#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    int t;
    cin>>t;
    int n;
    
    
    while(t--)
    {
        cin>>n;
    vector<int>v1(n);
    vector<int>v2(n);
        
        for(int i=0;i<n;i++)
        {
            cin>>v1[i];
        }
        
        for(int i=0;i<n;i++)
        {
            
            cin>>v2[i];
        }
        
        for(int i=0;i<v1.size();i++)
        {
            if(v2[i]>v1[i])
            {
                swap(v2[i],v1[i]);
            }
        }
        int x=*max_element (v2.begin(), v2.end());
 
        int y=*max_element (v1.begin(),v1.end());
        cout<<x*y<<endl;
        
    }
 
    return 0;
}
