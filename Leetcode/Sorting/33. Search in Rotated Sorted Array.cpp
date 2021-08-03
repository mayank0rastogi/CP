/*There is an integer array nums sorted in ascending order (with distinct values).

Prior to being passed to your function, nums is rotated at an unknown pivot index k (0 <= k < nums.length) such that the resulting array is [nums[k], nums[k+1], ..., nums[n-1], nums[0], nums[1], ..., nums[k-1]] (0-indexed). For example, [0,1,2,4,5,6,7] might be rotated at pivot index 3 and become [4,5,6,7,0,1,2].

Given the array nums after the rotation and an integer target, return the index of target if it is in nums, or -1 if it is not in nums.

You must write an algorithm with O(log n) runtime complexity.

 

Example 1:

Input: nums = [4,5,6,7,0,1,2], target = 0
Output: 4
Example 2:

Input: nums = [4,5,6,7,0,1,2], target = 3
Output: -1
Example 3:

Input: nums = [1], target = 0
Output: -1
 

Constraints:

1 <= nums.length <= 5000
-104 <= nums[i] <= 104
All values of nums are unique.
nums is guaranteed to be rotated at some pivot.
-104 <= target <= 104
*/
 //1st solution
class Solution {
public:
    int search(vector<int>& nums, int target) {
      // int ret=-1;
        int low=0;
        int high=nums.size()-1;
        while(low<=high)
        {
            int mid=(low+high)/2;
            cout<<"Every time mid value ->"<<mid<<endl;
            
            if(nums[mid]==target)
            {
                cout<<"returning mid->"<<mid<<endl;
                return mid;
            }
            
            else if(nums[mid]>=nums[low])//it means lies in first search space
            {
                cout<<"lies in first search space->"<<endl;
                if(nums[mid]>=target && nums[low]<=target)
                {
                  high=mid-1;
                  cout<<"value of high ->"<<high<<endl;
                }
                else
                {
                    low=mid+1;
                     cout<<"value of low ->"<<low<<endl;
                }
            }
            
            else        //lies in 2nd search space
            {
                 cout<<"lies in second search space ->"<<endl;
                if(nums[mid]<=target && nums[high]>=target)
                {
                    low=mid+1;
                     cout<<"value of low ->"<<low<<endl;
                }
                else
                {
                    high=mid-1;
                     cout<<"value of high ->"<<high<<endl;
                }
            }
        }
        
        return -1;
    }
};

//2nd Solution

class Solution {
public:
    int search(vector<int>& nums, int target) {
      int ret=-1;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==target)
            {
                ret=i;
                break;
            }

        }
        return ret;
    }
};
