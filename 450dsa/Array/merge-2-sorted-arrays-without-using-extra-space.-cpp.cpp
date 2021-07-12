/******************************************************************************
 Given two sorted arrays arr1[] of size N and arr2[] of size M. Each array is sorted in non-decreasing order. Merge the two arrays into one sorted array in non-decreasing order without using any extra space.


Example 1:

Input:
N = 4, M = 5
arr1[] = {1, 3, 5, 7}
arr2[] = {0, 2, 6, 8, 9}


*******************************************************************************/
#include <bits/stdc++.h>
using namespace std;

void merge(int a1[],int n1,int a2[],int n2)
{
    for(int i=n1-1;i>=0;i--)
    {
        for(int j=0;j<n2;j++)
        {
            if(a1[i]<a2[j])
            {
                swap(a1[i],a2[j]);
            }
            
        }
    }
    
    sort(a1,a1+n1);
    sort(a2,a2+n2);
}

int main()
{
   int a1[]={1, 3, 5, 7};
   int a2[]={0, 2, 6, 8, 9};
   int n1=sizeof(a1)/sizeof(a1[0]);
   int n2=sizeof(a2)/sizeof(a2[0]);
   
   merge(a1,n1,a2,n2);
   for(int j=0;j<n2;j++)
   {
     cout<<a2[j]<<" ";
   }
   
   for(int i=0;i<n1;i++)
   {
       cout<<a1[i]<<" ";
   }
   
   
   cout<<endl;
    return 0;
}

