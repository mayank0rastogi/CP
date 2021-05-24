/******************************************************************************
Maximum and minimum of an array using minimum number of comparisons


*******************************************************************************/
#include <bits/stdc++.h>
using namespace std;
int main()
{
   int arr[] = { 1000, 11, 445,
                  1, 3300, 3000 };
    int n = sizeof(arr)/sizeof(arr[0]);
    
    sort(arr,arr+n);
   int min=arr[0];
   int max=arr[n-1];
    cout<< "Minimum element is "<<min<<endl;
    cout<< "Maximum element is "<<max;

    return 0;
}
