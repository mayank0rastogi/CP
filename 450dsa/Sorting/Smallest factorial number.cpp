// Given a number n. The task is to find the smallest number whose factorial contains at least n trailing zeroes.

// Example 1:

// Input:
// n = 1
// Output: 5
// Explanation : 5! = 120 which has at
// least 1 trailing 0.
// Example 2:

// Input:
// n = 6
// Output: 25
// Explanation : 25! has at least
// 6 trailing 0.

// User Task:
// Complete the function findNum() which takes an integer N as input parameters, and returns the answer.

// Expected Time Complexity: O(log2 N * log5 N).
// Expected Auxiliary Space: O(1).


class Solution
{
    public:
    
    int solve(int mid,int n) //checking for n trailling zeros
    {
        int temp=mid,count=0,f=5;
        while(f<=temp)
        {
            count+=temp/f;
            f=f*5;
        }
        return (count>=n);
    }
        int findNum(int n)
        {
        //complete the function here
        if(n==1)
        {
            return 5;
        }
        int low=0;
        int high=n*5;
        while(low<high)
        {
            int mid=(low+high)/2;
            
            if(solve(mid,n))
            {
                high=mid;
            }
            else
            {
                low=mid+1;
            }
        }
        return low;
        }
};
