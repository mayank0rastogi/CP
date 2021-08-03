#include<bits/stdc++.h>
using namespace std;

class Solution{
public:
    int *findTwoElement(int *arr, int n) {
        // code here
        int x,y;
        for(int i=0;i<n;i++)
        {
            if(arr[abs(arr[i])-1]<0)
            {
                x=abs(arr[i]);
            }
            
            else
            {
                arr[abs(arr[i])-1]=-arr[abs(arr[i])-1];
            }
            
            //till now we have find the repeating element
        }
            for(int i=0;i<n;i++)
            {
                if(arr[i]>0)
                {
                    y=i+1;
                    break;
                }
            }
        int *v=new int[2];
        v[0]=x;
        v[1]=y;
        return v;
    }
};
int main()
{
  int t;
  cin>>t;
  
  while(t--)
  {
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
      cin>>arr[i];
    } 
    Solution obj;
    auto ans=obj.findTwoElement(arr,n);
    cout<<ans[0]<<" "<<ans[1]<<endl;
  }return 0;
}
