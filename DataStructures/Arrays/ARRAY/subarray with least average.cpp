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

#include<bits/stdc++.h>
using namespace std;

void subarray_average(int a[],int n,int k)
{
    ///value of k must be small than n or equal to

    if(n<k)
    {

        return;
    }
    ///beginning result of index
    int res=0;
    ///compute sub array of size k at that time of sub array;
    int curr_sum=0;;

    for(int i=0;i<k;i++)
    {


        curr_sum+=a[i];
    }

    ///consider minimum_sum as current so initialize minimum sum as current sum
    int min_sum=curr_sum;

    ///traverse from k+1 to nth element
    for(int i=k;i<n;i++)
    {

        curr_sum+=a[i]-a[i-k];

        ///update result if needed
        if(curr_sum<min_sum)
        {

            min_sum=curr_sum;
            res=(i-k+1);
        }
    }

    cout<<"\t\tSubArray Index between{"<<res<<" To "<<res+k-1<<"} has minimum average";
    float avg;
    int sum=0;
    int count=0;
    for(int i=res;i<=res+k-1;i++)
    {

        sum+=a[i];
         count++;
    }
    avg=sum/count;
    cout<<"\n\n\t\t And the average Sum of their index number is: "<<avg<<"\n\n";

}

int main()
{
    system("color D0");

int a[]={3, 7, 90, 20, 10, 50, 40};
int n=sizeof a/sizeof a[0];
int k=3;
subarray_average(a,n,k);
    return 0;
}




