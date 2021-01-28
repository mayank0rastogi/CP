#include<bits/stdc++.h>

using namespace std;


void Negative_after_Positive(int a[],int n)
{
int i=0;
for(int j=0;j<n;j++)
{

    if(a[j]<0)
    {

        if(j!=i)
        {

            swap(a[j],a[i]);
            i++;
        }
    }
}


}
void printArray(int ar[], int size)
{
   for (int i=0; i < size; i++)
       cout << ar[i] << " ";
}

int main()
{ // Change n at the top to change number of elements
    // in an array

    int a[]={-1, 2, -3, 4, 5, 6, -7, 8, 9};
    int n=sizeof(a)/sizeof(a[0]);
    Negative_after_Positive(a,n);
    printArray(a,n);
    return 0;
}
