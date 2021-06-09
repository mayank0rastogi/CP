/******************************************************************************
Input: -12, 11, -13, -5, 6, -7, 5, -3, -6
Output: -12 -13 -5 -7 -3 -6 11 6 5

*******************************************************************************/
#include <bits/stdc++.h>
using namespace std;

void shift_negative_onto_one_side(int arr[],int n)
{
   int j=0;
  
    for(int i=0;i<n;i++)
    {
        if(arr[i]<0)
        {
            if(i!=j)
            {
            swap(arr[i],arr[j]);
            }
            j++;
        }
    }

}
/*
void swap(int arr1[],int arr2[])
{
    int i,j;
    int temp=arr2[i];
    arr2[i]=arr1[j];
    arr1[j]=temp;
}
*/
void printA(int arr[],int n)
{
    for(int i=0;i<n;i++)
    cout<<arr[i]<<" ";
}
int main()
{
    int arr[]={-12, 11, -13, -5, 6, -7, 5, -3, -6};
    int n=sizeof(arr)/sizeof(arr[0]);
    shift_negative_onto_one_side(arr,n);
    printA(arr,n);

    return 0;
}
