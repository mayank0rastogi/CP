/******************************************************************************


move negative elements at the end 
*******************************************************************************/
#include <bits/stdc++.h>
using namespace std;

void move_negative_at_the_end(int a[],int n)
{
    //temporary array
    int temp[n];
    int j=0;
    //copy +ve elements to temp array
    for(int i=0;i<n;i++)
    {
        if(a[i]>=0)
        {
            temp[j++]=a[i];
        }
    }
    //if all elements +ve and -ve elements
    if(j==n || j==0)
    {
        return;
    }
    
    //negative elements
    for(int i=0;i<n;i++)
    {
        if(a[i]<0)
        {
            temp[j++]=a[i];
        }
    }
    
    //copy contents of temp to array
    
    memcpy(a,temp,sizeof(temp));
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
   int a[] = {1 ,-1 ,-3 , 7, 5, 11, -2 , 6 }; 
    int n = sizeof(a)/sizeof(a[0]); 
    move_negative_at_the_end(a,n);
    print_array(a,n);

    return 0;
}
