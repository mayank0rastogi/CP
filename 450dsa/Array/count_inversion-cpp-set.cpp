#include<bits/stdc++.h>
using namespace std;

long long get_inversion_count(int arr[],int n)
{
    multiset<int>set1;
    set1.insert(arr[0]);
    
    long long inv_count=0;
    
    multiset<int>::iterator set2;
    
    for(int i=1;i<n;i++)
    {
        set1.insert(arr[i]);
        
        set2=set1.upper_bound(arr[i]);
        
        inv_count+=distance(set2,set1.end());
        
    }
    return inv_count;
}

int main()
{
    int arr[]={2, 4, 1, 3, 5};
    int n=sizeof(arr)/sizeof(arr[0]);
    
    cout<<get_inversion_count(arr,n)<<endl;
    
    
}