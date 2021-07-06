#include<bits/stdc++.h>
using namespace std;

int minJumps(int arr[],int n)
{
    if(n<=1)
    {
        return 0;
    }
    if(arr[0]==0)
    {
        return -1;
    }
    
    int maxreach=arr[0];
    int step=arr[0];
    int jump=1;
    int i=1;
    for(int i=1;i<n;i++)
    {
        if(i==n-1)
        {
            return jump;
        }
        maxreach=max(maxreach,arr[i]+i);
        
        step--;
        
        if(step==0)
        {
            return jump;
            
            if(i>=maxreach)
            {
                step =  maxreach-i;
            }
        }
    }
    return -1;
}

int main()
{
    int n = 11;
    int arr[] = {1, 3, 5, 8, 9, 2, 6, 7, 6, 8, 9} ;

n=minJumps(arr,n);
cout<<n<<endl;
return 0;
}