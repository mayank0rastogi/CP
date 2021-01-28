#include<bits/stdc++.h>

using namespace std;


void second_largest(int a[],int n)
{

///check that size if array is not less than 2
if(n<2)
{

    cout<<"Enter the maximum Size of 2";
    return;
}
sort(a,a+n);
///check for second largest element
for(int i=n-2;i>=0;i--)
{

    if(a[i]!=a[n-1])
       {
        cout<<"You Find the Second largest Element "<<a[i]<<"\n";
          return;
       }
}
cout<<"There is no second largest element in the array"<<endl;



}
void printArray(int a[], int size)
{
   for (int i=0; i < size; i++)
       cout << a[i] << " ";
}

int main()
{ // Change n at the top to change number of elements
    // in an array

    int a[]={12, 35, 1, 10, 34, 1 };
    int n=sizeof(a)/sizeof(a[0]);

    second_largest(a,n);
    printArray(a,n);

    return 0;
}
