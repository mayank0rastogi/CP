/******************************************************************************

Input : A = {1, 2, 3, 4, 5}
Output : [48]
         [20, 28] 
         [8, 12, 16] 
         [3, 5, 7, 9] 
         [1, 2, 3, 4, 5] 

*******************************************************************************/
#include <bits/stdc++.h>
using namespace std;

void pirnt_triangle(int a[],int n)
{
    //check the base case
    if(n<1)
    {
        return;
    }
    
    int temp[n-1];
    for(int i=0;i<n-1;i++)
    {
        int x=a[i]+a[i+1];
        temp[i]=x;
        
    }
    //cout<<"Middle"<<endl;
    pirnt_triangle(temp,n-1);//recursively call the function and intialize the new array
    
    for(int i=0;i<n;i++)
    {
        if(i==n-1)
        {
            cout<<a[i]<<" ";
        }
        else
        {
        cout<<a[i]<<",";
        }
        
    }
    cout<<endl;
    
}
int main()
{
   int a[]={1, 2, 3, 4, 5};
   int n=sizeof(a)/sizeof(a[0]);
   
   pirnt_triangle(a,n);
   cout<<"The end "<<endl;
    return 0;
}
