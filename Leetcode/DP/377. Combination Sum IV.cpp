// Given an array of distinct integers nums and a target integer target, return the number of possible combinations that add up to target.

// The answer is guaranteed to fit in a 32-bit integer.

 

// Example 1:

// Input: nums = [1,2,3], target = 4
// Output: 7
// Explanation:
// The possible combination ways are:
// (1, 1, 1, 1)
// (1, 1, 2)
// (1, 2, 1)
// (1, 3)
// (2, 1, 1)
// (2, 2)
// (3, 1)
// Note that different sequences are counted as different combinations.
// Example 2:

// Input: nums = [9], target = 3
// Output: 0
 

// Constraints:

// 1 <= nums.length <= 200
// 1 <= nums[i] <= 1000
// All the elements of nums are unique.
// 1 <= target <= 1000
 

// Follow up: What if negative numbers are allowed in the given array? How does it change the problem? What limitation we need to add to the question to allow negative numbers?

class Solution {
public:
        int dp[1001];
    int cs(vector<int>&nums,int target)
        {
            if(target==0)
            {
                return 1;
            }
            if(target<0)
            {
                return 0;
            }
            if(dp[target]!=-1)
            {
                return dp[target];
            }
            
            int count=0;
            for(int i=0;i<nums.size();i++)
            {
                count+=cs(nums,target-nums[i]);
            }
            return dp[target]=count;
        }
    int combinationSum4(vector<int>& nums, int target) {
       
    memset(dp,-1,sizeof(dp));
    return cs(nums,target);   
        
    }
};
