/******************************************************************************
1001(9)  XOR(^)  0101(5) --> 1100(12)
 
how below code is basically works

(a1^a2^a4^a5) ^ (a1^a2^a3^a4^a5) where a1^a1=0 so only a3 left which will return my function  presently
*******************************************************************************/
#include <bits/stdc++.h>
using namespace std;

int find_Missing_no_using_xor(int a[],int n)
{
    // For xor of all the elements in array
    int x1 = a[0];
 
    // For xor of all the elements from 1 to n+1
    int x2 = 1;
 
    for (int i = 1; i < n; i++)
        x1 = x1 ^ a[i];
 
    for (int i = 2; i <= n + 1; i++)
        x2 = x2 ^ i;
 
    return (x1 ^ x2);
}

int main()
{
    int a[] = {1, 2, 4, 5, 6};
    int n = sizeof(a) / sizeof(a[0]);
    cout<<"The odd occurring element is"<<endl;
    cout<<find_Missing_no_using_xor(a, n);

    return 0;
}
