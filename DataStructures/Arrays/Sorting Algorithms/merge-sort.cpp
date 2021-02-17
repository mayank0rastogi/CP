/******************************************************************************
Merge sort

*******************************************************************************/
#include <bits/stdc++.h>
using namespace std;

void merge(int a[],int left,int middle,int right)
{
    int i=left;///starting index of left subarray
    int j=middle+1;///starting index of right subarray
    int k=left;///starting index of temp array
    int temp[right+1];
    while(i<=middle && j<=right)
    {
      if(a[i]<=a[j])
      {
          temp[k]=a[i];
          i++,k++;
      }
      else
      {
        temp[k]=a[j];
        j++,k++;
          }
    }
    
    
    ///now individually sort left and right array for remaining element 
    while(i<=middle)
    {
        temp[k]=a[i];
        k++,i++;
    }
    
    while(j<=right)
    {
        temp[k]=a[j];
        j++,k++;
    }
    
    ///copying temp array to original array after sorting
    for(int i=left;i<right+1;i++)
    {
       a[i]=temp[i];
    }
    
}


void merge_sort(int a[],int left,int right)
{
    if(left<right)
    {
        int middle=(left+right)/2;
        merge_sort(a,left,middle);
        merge_sort(a,middle+1,right);
        merge(a,left,middle,right);
    }
}
void print_array(int a[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
}

int main()
{
    int n;
    cout<<"enter the array element \n";
    cin>>n;
    int a[n];
    cout<<"Enter the array element \n";
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        
    }
    
      ///print before  array
      print_array(a,n);
      
      int left=0,right=n-1;
      ////merge sorting
      merge_sort(a,left,right);
     ///print after sorting if the array
     cout<<endl;
    
     print_array(a,n);
    
    return 0;
}
