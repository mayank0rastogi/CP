#include <bits/stdc++.h>
using namespace std;

int divisible(int arr[],int n,int k)
{
    
    int count=0;
    
    //optmized Approach using map--O(N)
    for(int i=0;i<n;i++)
    {
        arr[i]=arr[i]%k;//storing remainder of every value
    }
    
    
 
   
    
    // for(int i=0;i<n;i++)
    // {
    //     cout<<arr[i]<<" ";//debug by printing the value which comes in my array
    // }
    unordered_map<int,int>m;
    
    for(int i=0;i<n;i++)
    {
        m[arr[i]]++;//count of every value(frequency)
    }
    
    for(int i=0;i<n;i++)
    {
        m[arr[i]]--;
        
        int need=k-arr[i];
        need = (need%k);//if our need  and arr[i] are same than we have to use it 
        
        count+=m[need];
    }
   
   
//   another Approach -->O(n^2)


    // for(int i=0;i<n;i++)
    // {
    //     cout<<"value ->"<<arr[i]<<endl;
    //     for(int j=i+1;j<n;j++)
    //     {
    //         if((arr[i]+arr[j])%k==0)
    //         {
    //             count++;
    //         }
    //     }
    // }
    return count; 
}

int main()
{
    int arr[]={1,3,2,6,1,2};
    int n=sizeof(arr)/sizeof(arr[0]);
    int k=3;
    cout<<divisible(arr,n,k)<<endl;
    // divisible(arr,n,k);

    return 0;
}
