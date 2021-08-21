// You are given a 2D array of integers envelopes where envelopes[i] = [wi, hi] represents the width and the height of an envelope.

// One envelope can fit into another if and only if both the width and height of one envelope are greater than the other envelope's width and height.

// Return the maximum number of envelopes you can Russian doll (i.e., put one inside the other).

// Note: You cannot rotate an envelope.

 

// Example 1:

// Input: envelopes = [[5,4],[6,4],[6,7],[2,3]]
// Output: 3
// Explanation: The maximum number of envelopes you can Russian doll is 3 ([2,3] => [5,4] => [6,7]).
// Example 2:

// Input: envelopes = [[1,1],[1,1],[1,1]]
// Output: 1
 

// Constraints:

// 1 <= envelopes.length <= 5000
// envelopes[i].length == 2
// 1 <= wi, hi <= 104
  
  
class Solution {
public:
    int maxEnvelopes(vector<vector<int>>& envelopes) {
        
        
        vector<int>dp(envelopes.size(),1);//dp array containing no of envelopes corresponding to each index
            
            sort(envelopes.begin(),envelopes.end());
        for(int i=0;i<envelopes.size();i++)//outer envelope
        {
            for(int j=0;j<i;j++)//inner envelope
            {
               //outer enve width > iner env width && outer enve height > iner env height
                if((envelopes[i][0]>envelopes[j][0])&&(envelopes[i][1]>envelopes[j][1]))
                {
                    dp[i]=max(dp[i],dp[j]+1);
                }
            }
        }
        return *max_element(dp.begin(),dp.end());
        
    }
};
