/******************************************************************************



*******************************************************************************/
#include <bits/stdc++.h>
using namespace std;

int longest_common_subsequence(int arr[],int n)
{
    unordered_set<int>s;
    int count=0;
    for(int i=0;i<n;i++)
    {
        s.insert(arr[i]);
    }
    
    for(int i=0;i<n;i++)
    {
        if(s.find(arr[i]-1)==s.end())
        {
            int j=arr[i];//new element is assigned after checking there is no prev elemnt present in set
        
        
            while(s.find(j)!=s.end())
            {
                j++;
            }
            count=max(count,j-arr[i]);
        }
       
    }
    
    return count;
}

int main()
{
   int arr[]={1, 9, 3, 10, 4, 20 ,2};
   
   int n=sizeof(arr)/sizeof(arr[0]);
   
   
   int q=longest_common_subsequence(arr,n);
   
   cout<<q<<endl;
    return 0;
}
