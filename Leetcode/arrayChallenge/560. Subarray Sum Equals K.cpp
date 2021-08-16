// Given an array of integers nums and an integer k, return the total number of continuous subarrays whose sum equals to k.

 

// Example 1:

// Input: nums = [1,1,1], k = 2
// Output: 2
// Example 2:

// Input: nums = [1,2,3], k = 3
// Output: 2
 

// Constraints:

// 1 <= nums.length <= 2 * 104
// -1000 <= nums[i] <= 1000
// -107 <= k <= 107

class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
     
        unordered_map<int,int>um;//contains cummulative sum and its count
        int count=0;
        um.insert({0,1});
        int sum=0;
        for(int i=0;i<nums.size();i++)
        {
            sum+=nums[i];
            
            auto it=um.find(sum-k);
            
            if(it!=um.end())
            {
                count+=it->second;//add it the count value from the map
            }
            
            //check current sum value is occuring second time kindly increase its count
            it=um.find(sum);
            if(it!=um.end())
            {
                it->second++;//increase the count value if sum is found again
            }
            
            else
            {
                um.insert({sum,1});//else inseet the new  cummulative sum and its count to 1 
            }
        }
        
        
        
        return count;
    }
};
