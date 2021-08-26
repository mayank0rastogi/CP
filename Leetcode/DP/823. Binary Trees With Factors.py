# Given an array of unique integers, arr, where each integer arr[i] is strictly greater than 1.

# We make a binary tree using these integers, and each number may be used for any number of times. Each non-leaf node's value should be equal to the product of the values of its children.

# Return the number of binary trees we can make. The answer may be too large so return the answer modulo 109 + 7.

 

# Example 1:

# Input: arr = [2,4]
# Output: 3
# Explanation: We can make these trees: [2], [4], [4, 2, 2]
# Example 2:

# Input: arr = [2,4,5,10]
# Output: 7
# Explanation: We can make these trees: [2], [4], [5], [10], [4, 2, 2], [10, 2, 5], [10, 5, 2].
 

# Constraints:

# 1 <= arr.length <= 1000
# 2 <= arr[i] <= 109
# All the values of arr are unique.



class Solution:
    def numFactoredBinaryTrees(self, arr: List[int]) -> int:
        arr.sort()
        mod=10**9+7
        n=len(arr)
        dp=[1]*(n)#create n size dp array in which all vaues are initailly set to 1
        # print(dp)
        arr_to_set=set(arr)
        for i in range(1,n):
            for j in range(i):
                if(arr[i]%arr[j]==0):
                    #store the multiple in temp variable
                    temp=arr[i]//arr[j]
                    #and search that multiple is present in arr_to_set or not
                    if temp in arr_to_set:
                        #if yes than find the index of that elemnet in the array 
                        idx=arr.index(temp)
                        dp[i]+=dp[j]*dp[idx]
        return sum(dp)%mod
                        
                        
                    
            
        
