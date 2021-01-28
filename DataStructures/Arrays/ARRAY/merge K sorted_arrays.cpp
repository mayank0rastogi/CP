#include<bits/stdc++.h>
#define n 4
using namespace std;


void merge_k_sorted_arrays(int ar[][n],int a,int output[])
{
    ///functions take array of array as an argument
    int c=0;
    ///traverse the matrix
    for(int i=0;i<a;i++)
    {

        for(int j=0;j<n;j++)
        {
            output[c++]=ar[i][j];

        }
    }

        ///sort the array
        sort(output,output+n*a);


}
void printArray(int ar[], int size)
{
   for (int i=0; i < size; i++)
       cout << ar[i] << " ";
}

int main()
{ // Change n at the top to change number of elements
    // in an array

    int ar[][n] =  {{2, 6, 12, 34},
                     {1, 9, 20, 1000},
                     {23, 34, 90, 2000}};
    int k = sizeof(ar)/sizeof(ar[0]);

    int output[n*k];

    merge_k_sorted_arrays(ar,3,output);

    cout << "Merged array is " << endl;
    printArray(output, n*k);
    return 0;
}
