#include <iostream>
using namespace std;

int main() {
int t;
cin>>t;

while(t--)
{
    int n,l_subarray,req_mex;
    cin>>n>>l_subarray>>req_mex;
    if(req_mex>l_subarray)
    {
        cout<<-1<<endl;
    }
    else
    {
        int c=0;
        for(int i=0;i<n;i++)
        {
            if(c==req_mex)
            {
                c=0;
                
            }
            cout<<c<<" ";
            c++;
            
        }
        cout<<endl;
        
        
    }
}
	return 0;
}
