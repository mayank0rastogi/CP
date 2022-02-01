#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int N,X,Y;
        cin>>N>>X>>Y;
        
        vector<int>A(N),B(N);
        for(int i=0;i<N;i++)
        {           
           cin>>A[i];
        }
        
        for(int i=0;i<N;i++)
        {
           cin>>B[i];
        }
        
       
  int c=1;      
  
        for(int i=0;i<N;i++)
        {
            if(B[i]-A[i]!=X && B[i]-A[i]!=Y)
            {
             c=0;
             break;
             
            }
            
        }
        
        if(c==0)
        {
         cout<<"No"<<endl;
        }
        else
        {
            cout<<"Yes"<<endl;
        }
     }

    return 0;
}
