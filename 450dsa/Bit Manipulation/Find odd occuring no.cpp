/******************************************************************************
1001(9)  XOR(^)  0101(5) --> 1100(12)
this is how program basically find the odd sequence no
1011010(90)  ^  0001110(14)   ->>>1010100(84) ^ 0001110(14)  -->> 1011010(90) 
*******************************************************************************/
#include <bits/stdc++.h>
using namespace std;

int find_odd_occuring_using_xor(int arr[],int n)
{
    int res=0;
    for(int i=0;i<n;i++)
    {
       res=res^arr[i];
    }
    return res;
}

int main()
{
    int arr[] = { 12, 12, 14, 90, 14, 14, 14 };
    int n = sizeof(arr) / sizeof(arr[0]);
    cout<<"The odd occurring element is"<<endl;
    cout<<find_odd_occuring_using_xor(arr, n);

    return 0;
}
