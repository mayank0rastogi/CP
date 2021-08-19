// Given an integer array nums sorted in non-decreasing order, return an array of the squares of each number sorted in non-decreasing order.

 

// Example 1:

// Input: nums = [-4,-1,0,3,10]
// Output: [0,1,9,16,100]
// Explanation: After squaring, the array becomes [16,1,0,9,100].
// After sorting, it becomes [0,1,9,16,100].
// Example 2:

// Input: nums = [-7,-3,2,3,11]
// Output: [4,9,9,49,121]
 

// Constraints:

// 1 <= nums.length <= 104
// -104 <= nums[i] <= 104
// nums is sorted in non-decreasing order.


class Solution {
public:
    // void bubble_sort(vector<int>&nums,int n)
    //   {
    //     int j=0;
    //     // int rounds=0;
    //     for(int i=0;i<n;i++)
    //     {
    //         // rounds++;
    //          bool flag=false;
    //         for(int j=0 ; j<n-i-1;j++)
    //         {
    //             if(nums[j+1]<nums[j])
    //             {
    //                 flag=true;
    //                 swap(nums[j],nums[j+1]);
    //             }
    //         }
    //         if(flag==false)
    //         {
    //             break;
    //         }
    //     }
    //     // cout<<"\n No of rounds:"<<rounds<<endl;
    // }
    vector<int> sortedSquares(vector<int>& nums) 
    {
        // i first tried the buuble sort approach but it gives me TLE so i used two pointer approach which solves my problems in O(n)
        int start=0;
        int end=nums.size()-1;
        
        vector<int> result(nums.size());
        int i=nums.size()-1;
        
        while(start<=end)
        {
            if(nums[start]*nums[start]>nums[end]*nums[end])
            {
                result[i]=nums[start]*nums[start];
                start++;
            }
            else
            {
                result[i]=nums[end]*nums[end];
                end--;
            }
         i--;   
        }
        // i--;
    
        
    return result;
    }
};
