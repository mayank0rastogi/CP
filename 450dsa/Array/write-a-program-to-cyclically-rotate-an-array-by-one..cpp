/******************************************************************************

Write a program to cyclically rotate an array by one.

*******************************************************************************/
#include <bits/stdc++.h>
using namespace std;
void rotate(int arr[],int n){
    
    int x=arr[n-1];
    //cout<<x<<endl;
    int i;
    
    for(int i=n-1;i>0;i--)
    {
        arr[i]=arr[i-1];
        
        //cout<<"see :"<<arr[i]<<endl;
    }
    arr[0]=x;
    
}
void print_arr(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
        
    }
    cout<<endl;
}

int main()
{
   int arr[]={1, 2, 3, 4, 5};
   int n=sizeof(arr)/sizeof(arr[0]);
   cout<<"The array before cyclically-rotate-array-one :"<<endl;
   print_arr(arr,n);
   rotate(arr,n);
   cout<<"The array after cyclically-rotate-array-one :"<<endl;
   print_arr(arr,n);

    return 0;
}
