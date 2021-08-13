// Given an array nums[] of size n, construct a Product Array P (of same size n) such that P[i] is equal to the product of all the elements of nums except nums[i].

 

// Example 1:

// Input:
// n = 5
// nums[] = {10, 3, 5, 6, 2}
// Output:
// 180 600 360 300 900
// Explanation: 
// For i=0, P[i] = 3*5*6*2 = 180.
// For i=1, P[i] = 10*5*6*2 = 600.
// For i=2, P[i] = 10*3*6*2 = 360.
// For i=3, P[i] = 10*3*5*2 = 300.
// For i=4, P[i] = 10*3*5*6 = 900.
// Example 2:

// Input:
// n = 2
// nums[] = {12,0}
// Output:
// 0 12

// Your Task:
// You do not have to read input. Your task is to complete the function productExceptSelf() that takes array nums[] and n as input parameters and returns a list of n integers denoting the product array P. If the array has only one element the returned list should should contains one value i.e {1}
// Note: Try to solve this problem without using the division operation.
 

// Expected Time Complexity: O(n)
// Expected Auxiliary Space: O(n)



// Solution
#include<bits/stdc++.h>
using namespace std;
class Solution{
  public:
    // nums: given vector
    // return the Product vector P that hold product except self at each index
    vector<long long int> productExceptSelf(vector<long long int>& nums, int n) {
       
       vector<long long int> l(n), r(n);
       l[0]=1;
       r[n-1]=1;
       
       for(int i=1;i<n;i++)
       {
           l[i]=l[i-1]*nums[i-1];
       }
       
       for(int i=n-2;i>=0;i--)
       {
           r[i]=r[i+1]*nums[i+1];
       }
       
       for(int i=0;i<n;i++)
       {
           nums[i]=l[i]*r[i];
       }
       
       return nums;
        //code here        
    }
};

int main()
{
  int t;
  cin>>t;
  while(t--)
  {
    int n;
    vector<long long int> arr(n), res(n);
    
    for(int i=0;i<n;i++)
    {
      cin>>arr[i];
    }
    
    Solution obj;
    res=obj.productExceptSelf(arr,n);
    
    for(int i=0;i<n;i++)
    {
      cout<<res[i]<<" ";
    }
    cout<<endl;
  }
  return 0;
}
