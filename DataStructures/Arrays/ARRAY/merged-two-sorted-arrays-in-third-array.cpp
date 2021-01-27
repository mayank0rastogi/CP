///Find the subarray with least average

/*
Input:  arr[] = {3, 7, 90, 20, 10, 50, 40}, k = 3
Output: Sub array between indexes 3 and 5
The sub array {20, 10, 50} has the least average
among all sub arrays of size 3.

Input:  arr[] = {3, 7, 5, 20, -10, 0, 12}, k = 2
Output: Sub array between [4, 5] has minimum average
*/
/*

Algorithm

1) Initialize res_index = 0 // Beginning of result index
2) Find sum of first k elements. Let this sum be 'curr_sum'
3) Initialize min_sum = sum
4) Iterate from (k+1)'th to n'th element, do following
   for every element arr[i]
      a) curr_sum = curr_sum + arr[i] - arr[i-k]
      b) If curr_sum < min_sum
           res_index = (i-k+1)
5) Print res_index and res_index+k-1 as beginning and ending
   indexes of resultant subarray.
*/
/*
<<<-
#include<bits/stdc++.h>
using namespace std;

void merge_two_sorted_into_one(int a1[],int a2[],int n1,int n2,int a3[])
{
    int i=0,j=0,k=0;

    ///traverse both array

    while(i<n1 &&j<n2)
    {

        ///check whether element  of 1st array is smaller
        ///is smaller than current element of second array.
        ///If yes store first array element and increase first array index
        ///otherwise do the same with second

        if(a1[i]<a2[j])
        {
            a3[k]=a1[i];///store and increase in the
            /// same that will reflect out of this
            k = k + 1;
            i = i + 1;
        }

        else
        {
            a3[k]=a2[j];///same as up just check which
            ///array  element is bigger with each other
            ///and simply store it on 3rd array
            k=k+1;
            j=j+1;
        }

    }

    ///store remaining element of first array
    while(i<n1)
    {

        a3[k++]=a1[i++];    }

        while(j<n2)
    {

        a3[k++]=a2[j++];    }




}

int main()
{
    system("color D0");

int a1[] = {1, 3, 5, 7};
    int n1 = sizeof(a1) / sizeof(a1[0]);

    int a2[] = {2, 4, 6, 8};
    int n2 = sizeof(a2) / sizeof(a2[0]);

    int a3[n1+n2];
    merge_two_sorted_into_one(a1, a2, n1, n2, a3);
    cout<<"<<<- Naive Approach ->>>"<<endl;

    cout<<" After iterating two arrays and shorted and storing two 3rd array array"<<endl;
    for(int i=0;i<n1+n2;i++)
    {
        cout<<"["<<a3[i]<<"] , ";

    }

    return 0;
}
*/
////////////////////////////////

///Using maps


#include<bits/stdc++.h>
using namespace std;

void merge_two_sorted_into_one(int a1[],int a2[],int n1,int n2)
{
    ///declaring map
    ///to store elements in sorted order
    map<int, bool>a3;


    ///inserting values into map
    ///1st
    for(int i=0;i<n1;i++)
        a3[a1[i]]=true;
    ///2nd
    for(int i=0;i<n2;i++)
        a3[a2[i]]=true;


    ///printing keys of the map

    for(auto i: a3)
        cout<<"\t["<<i.first<<" ] ,";



    }

    int main()

{

    system("color D0");
    int a1[] = {1, 3, 5, 7}, a2[] = {9, 4, 6, 8};

    int n1 = sizeof(a1)/sizeof(a1[0]);
    int n2 = sizeof(a2)/sizeof(a2[0]);

    // Function call
    cout<<"\t<<<- Optimized  Approach Using Map ->>>"<<"\n\n";
    merge_two_sorted_into_one(a1, a2, n1, n2);

    return 0;
}



