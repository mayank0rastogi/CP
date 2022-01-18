// Given two integer arrays nums1 and nums2, return an array of their intersection. Each element in the result must be unique and you may return the result in any order.

 

// Example 1:

// Input: nums1 = [1,2,2,1], nums2 = [2,2]
// Output: [2]
// Example 2:

// Input: nums1 = [4,9,5], nums2 = [9,4,9,8,4]
// Output: [9,4]
// Explanation: [4,9] is also accepted.
 

// Constraints:

// 1 <= nums1.length, nums2.length <= 1000
// 0 <= nums1[i], nums2[i] <= 1000


class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2)
    {
        vector<int>store;
        unordered_set<int>st;
        unordered_set<int>st1;
        for(int i=0;i<nums1.size();i++)
        {
            st.insert(nums1[i]);
        }
        
        for(int i=0;i<nums2.size();i++)
        {
            st1.insert(nums2[i]);
        }
        
        for(auto x:st)
        {
            if(st1.find(x)!=st1.end())
            {
                store.push_back(x);
            }
            
        }
        
       return store;
    }
};


// Another approach :

// class Solution {
// public:
//     vector<int> intersection(vector<int>& nums1, vector<int>& nums2) 
//     {
//         set<int>s1,s2;
//         for(int i=0;i<nums1.size();i++)
//         {
//             s1.insert(nums1[i]);
//         }
        
//         for(int i=0;i<nums2.size();i++)
//         {
//             s2.insert(nums2[i]);
//         }
        
        
//         if(s1.size()<s2.size())
//         {
//             return find_intersection(s1,s2);
//         }
        
//         else
//         {
//             return find_intersection(s2,s1);
//         }
//     }
    
//     vector<int> find_intersection(set<int>s1,set<int>s2)
//     {
//         vector<int>r;
//         for(auto x: s1)
//         {
//             if(s2.find(x)!=s2.end())
//             {
//                 r.push_back(x);
//             }
//         }
        
//         return r;
            
        
//     }
// };
