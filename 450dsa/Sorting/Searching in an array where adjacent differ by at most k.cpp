// Searching in an array where adjacent differ by at most k

#include <bits/stdc++.h>
using namespace std;

int find(int arr[],int n,int x,int k)
{
    int ans=-1;
    int i=0;
   while(i<n)
   {
        if(arr[i]==x)
        {
            ans=i;//storing index of that element
            break;
        }
       
            i=i+max(1,abs(arr[i]-x)/k);
        
    }
    return ans;
}

int main()
{
   int arr[]={2, 4, 5, 7, 7, 6};
   int n=sizeof(arr)/sizeof(arr[0]);
   int x=6;
   int k=2;
   cout<<find(arr,n,x,k)<<endl;
   return 0;

}
