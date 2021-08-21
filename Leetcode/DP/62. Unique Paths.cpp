// Input: m = 3, n = 7
// Output: 28
// Example 2:

// Input: m = 3, n = 2
// Output: 3
// Explanation:
// From the top-left corner, there are a total of 3 ways to reach the bottom-right corner:
// 1. Right -> Down -> Down
// 2. Down -> Down -> Right
// 3. Down -> Right -> Down
// Example 3:

// Input: m = 7, n = 3
// Output: 28
// Example 4:

// Input: m = 3, n = 3
// Output: 6
 

// Constraints:

// 1 <= m, n <= 100
// It's guaranteed that the answer will be less than or equal to 2 * 109.
  
  

class Solution {
public:
    int uniquePaths(int m, int n) {
        
        vector<vector<int>>dp(m,vector<int>(n,1));
        
        for(int i=1;i<m;i++)
        {
            for(int j=1;j<n;j++)
            {
                dp[i][j]=dp[i-1][j]+dp[i][j-1];
                
            }
        }
        return dp[m-1][n-1];
    }
};

//optimized solution

class Solution {
public:
    int uniquePaths(int m, int n) {
        int N=n+m-2;
        int r=m-1;
        double res=1;
        
        for(int i=1;i<=r;i++)
        {
            cout<<"value of N-r+i ->"<<N-r+i<<endl;
            res=res*(N-r+i)/i;
            cout<<"value of res"<<res<<endl;
            
        }
        return (int)res;
    }
        
    };
