//first method
#include<bits/stdc++.h>
using namespace std;


void sort012(int a[], int n)
{
    int i;
    int cnt0=0,cnt1=0,cnt2=0;
    for(int i=0;i<n;i++)
    {
        switch(a[i])
        {
            case 0:
                cnt0++;
                break;
            case 1:
                cnt1++;
                break;
            case 2:
                cnt2++;
                break;
            
        }
    }
   
    
    //updating the array after  switch function counting the numbers
     i=0;
    while(cnt0>0)
    {
        a[i++]=0;
        cnt0--;
    }
     while(cnt1>0)
    {
        a[i++]=1;
        cnt1--;
    }
     while(cnt2>0)
    {
        a[i++]=2;
        cnt2--;
    }
    
}

int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
        }
        sort012(a,n);
        cout<<"Sorted array"<<endl;
        for(int i=0;i<n;i++)
        {
            cout<<a[i]<<" ";
        }
    }
    return 0;
}


/* 
//2nd Method
#include <bits/stdc++.h>
using namespace std;


int main()
{
    int arr[]={0, 1, 1, 0, 1, 2, 1, 2, 0, 0, 0, 1};
    int n=sizeof(arr)/sizeof(arr[0]);
    
     sort(arr,arr+n);
     
     for(int i=0;i<n;i++)
     {
         cout<<arr[i]<<" ";
     }

    return 0;
}
*/
