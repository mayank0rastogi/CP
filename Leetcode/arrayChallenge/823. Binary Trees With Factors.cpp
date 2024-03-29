// Given an array of unique integers, arr, where each integer arr[i] is strictly greater than 1.

// We make a binary tree using these integers, and each number may be used for any number of times. Each non-leaf node's value should be equal to the product of the values of its children.

// Return the number of binary trees we can make. The answer may be too large so return the answer modulo 109 + 7.

 

// Example 1:

// Input: arr = [2,4]
// Output: 3
// Explanation: We can make these trees: [2], [4], [4, 2, 2]
// Example 2:

// Input: arr = [2,4,5,10]
// Output: 7
// Explanation: We can make these trees: [2], [4], [5], [10], [4, 2, 2], [10, 2, 5], [10, 5, 2].
 

// Constraints:

// 1 <= arr.length <= 1000
// 2 <= arr[i] <= 109
// All the values of arr are unique.

class Solution {
public:
    int numFactoredBinaryTrees(vector<int>& arr) {
      
        unordered_map<int,long long int>m;
        
        sort(arr.begin(),arr.end());
        
        //insert all values into map and intially make all count value is eqal to 1 
        for(int i=0;i<arr.size();i++)
        {
            m.insert({arr[i],1});
        }
        
        //we start from 1 because smallest no only form  binary tree
        for(int i=1;i<arr.size();i++)
        {
            auto it3=m.find(arr[i]);
            long long int count=0;
            for(int j=0;j<i;j++)
            {
                if(arr[i]%arr[j]==0)
                {
                    auto it= m.find(arr[i]/arr[j]);//finding the multiple
                    auto it2=m.find(arr[j]);
                    
                    if(it!=m.end())
                    {
                        //it it is true it means that this value--> arr[i]/arr[j] find in the map
                        count+=(it->second)*(it2->second);
                    }
                }
            }
            it3->second+=count;
        }
        
        //findally we just add all the values
        
        long long int sum=0;
        for(auto it4=m.begin();it4!=m.end();it4++)
        {
            sum+=it4->second;
        }
        long long int mod=pow(10,9)+7;
        return (sum%mod);

    }
};
