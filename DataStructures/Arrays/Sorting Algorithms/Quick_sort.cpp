/******************************************************************************
Quick sort

*******************************************************************************/
#include <bits/stdc++.h>
using namespace std;

int partition(int a[],int s,int e)
{
    //store the pivot element
    int pivot=a[e];
    ///
    int pindex=s;
    
    for(int i=s;i<e;i++)
    {
        if(a[i]<=pivot)
        {
            ///either use manual swapping by this 
            /*
            int temp=a[i];
            a[i]=a[pindex];
            a[pindex]=temp;
            */
            ///or use swap function
            swap(a[i],a[pindex]);
            pindex++;
        }
        
        
    }
    swap(a[e],a[pindex]);
    return pindex;
}


void Quick_sort(int a[],int s,int e)
{
    if(s<e)
    {
        int p=partition(a,s,e);
        Quick_sort(a,s,(p-1));
        Quick_sort(a,(p+1),e);
        
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
      
      int s=0,e=n-1;
      ////merge sorting
      Quick_sort(a,s,e);
     ///print after sorting if the array
     cout<<endl;
    
     print_array(a,n);
    
    return 0;
}


/*

#include <bits/stdc++.h>
using namespace std;

int partition(int a[],int s,int e)
{
    //store the pivot element
    int pivot=a[e];
    ///
    int pindex=s;
    
    for(int i=s;i<e-2;i++)
    {
        if(a[i]<=a[pivot])
        {
            
            swap(a[i],a[pindex]);
            pindex++;
        }
        
        
    }
    swap(a[e],a[pindex]);
    return pindex;
}


void Quick_sort(int a[],int s,int e)
{
    if(s<e)
    {
        int p=partition(a,s,e);
        Quick_sort(a,s,p-1);
        Quick_sort(a,p+1,e);
        
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
      
      int s=0,e=n-1;
      ////merge sorting
      Quick_sort(a,s,e);
     ///print after sorting if the array
     cout<<endl;
    
     print_array(a,n);
    
    return 0;
}
*/

