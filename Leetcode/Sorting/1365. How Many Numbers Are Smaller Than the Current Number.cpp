/*
Given the array nums, for each nums[i] find out how many numbers in the array are smaller than it. That is, for each nums[i] you have to count the number of valid j's such that j != i and nums[j] < nums[i].

Return the answer in an array.

 

Example 1:

Input: nums = [8,1,2,2,3]
Output: [4,0,1,1,3]
Explanation: 
For nums[0]=8 there exist four smaller numbers than it (1, 2, 2 and 3). 
For nums[1]=1 does not exist any smaller number than it.
For nums[2]=2 there exist one smaller number than it (1). 
For nums[3]=2 there exist one smaller number than it (1). 
For nums[4]=3 there exist three smaller numbers than it (1, 2 and 2).
Example 2:

Input: nums = [6,5,4,8]
Output: [2,1,0,3]
Example 3:

Input: nums = [7,7,7,7]
Output: [0,0,0,0]
 

Constraints:

2 <= nums.length <= 500
0 <= nums[i] <= 100
*/

class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
//         int count;
//         vector<int>result;
//         for(int i=0;i<nums.size();i++)
//         {
//             count=0;
//             for(int j=0;j<nums.size();j++)
//             {
                

//                    if(j!=i && nums[i]>nums[j])
//                    {
//                        count++;
                       
//                    }
                   
//                 }
//              result.push_back(count);
//         }
       
//       return result;   
        
       /* Another approach */
//         int n=nums.size(); 
//         vector<int> take(102,0);
//         vector<int> result;
        
//         for(int i=0;i<n;i++)
//         {
//             take[nums[i]]++;
//         }
        
//         for(int i=0;i<101;i++)
//         {
//             take[i]+=take[i-1];
//         }
        
//         for(int i=0;i<n;i++)
//         {
//             if(nums[i]==0)
//             {
//                 result.push_back(0);
//             }
//             else
//             {
//                 result.push_back(take[nums[i]-1]);
//             }
//         }
//         return result;
//     }
    
        
        /*Another Approach using Map*/
        
        map<int,int>mp;
        vector<int>res;
        for(auto x:nums)
        {
            mp[x]++;
        }
        
        int calc;
        
        for(auto &x:nums)
        {
            auto itr=mp.find(x);
            calc=0;
            for(auto it=mp.begin();it!=itr;it++)
            {
                calc+=it->second;
                
            }
            res.push_back(calc);
           // x=calc;
        }
        return res;
    }
};
