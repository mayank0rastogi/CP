/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <bits/stdc++.h>
using namespace std;

int trappingWater(int arr[], int n){
        // Code here
        //there are two bars i have created
        int left[n];
        int right[n];
        
        //initially water is at 0
        int water=0;
        
        //fill left array
        left[0]=arr[0];
        for(int i=1;i<n;i++)
        {
            left[i]=max(left[i-1],arr[i]);
            //cout<<"left array: "<<left[i]<<endl;
        }
        
        //fill right array
        
        right[n-1]=arr[n-1];//at last index last element assigned
        for(int i=n-2;i>=0;i--)
        {
            right[i] = max(right[i+1],arr[i]);
            //cout<<"right array: "<<right[i]<<endl;
        }
        
        // for(int i=0;i<n;i++)
        // {
        //     cout<<"printing left array complete"<<left[i]<<endl;
        // }
        
        // for(int i=0;i<n;i++)
        // {
        //     cout<<"printing right array complete"<<right[i]<<endl;
        // }
        for(int i=0;i<n;i++)
        {
            water+=min(left[i],right[i]) - arr[i];
        }
        
        return water;
        
        
        
        
    }

int main()
{
    int arr[]={3,0,0,2,0,4};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<trappingWater(arr,n)<<endl;
   

    return 0;
}
