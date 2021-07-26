/******************************************************************************



*******************************************************************************/
#include <bits/stdc++.h>
using namespace std;

int solve(int arr[],int n,int x,int tog)
{
    int low=0;
    int high =n-1;
    int ans=-1;
    
    while(low<=high)
    {
        int mid=(low+high)/2;
        if(arr[mid]<x)
        {
            low=mid+1;
        }
        else if(arr[mid]>x)
        {
            high=mid-1;
        }
        else
        {
            ans=mid;
            if(tog==-1)
            {
                high=mid+tog;
            }
            else
            {
                low=mid+tog;
            }
        }
    }
    return ans;
}
vector<int> find(int arr[], int n , int x )
{
    
    vector<int>res;
    
        int idx1=solve(arr,n,x,-1);
          int idx2=solve(arr,n,x,1);
          
          if(idx1==n)
          {
              cout<<"-1\n"<<endl;
          }
          else
          {
             res.push_back(idx1);
             res.push_back(idx2);
          }
          return res;
          
   }
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,x;
        cin>>n>>x;
        int arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        vector<int>ans;
        ans=find(arr,n,x);
        cout<<ans[0]<<" "<<ans[1];
        return 0;
    }

    return 0;
}
