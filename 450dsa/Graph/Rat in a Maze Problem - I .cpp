// Consider a rat placed at (0, 0) in a square matrix of order N * N. It has to reach the destination at (N - 1, N - 1). Find all possible paths that the rat can take to reach from source to destination. The directions in which the rat can move are 'U'(up), 'D'(down), 'L' (left), 'R' (right). Value 0 at a cell in the matrix represents that it is blocked and rat cannot move to it while value 1 at a cell in the matrix represents that rat can be travel through it.
// Note: In a path, no cell can be visited more than one time.

// Example 1:

// Input:
// N = 4
// m[][] = {{1, 0, 0, 0},
//          {1, 1, 0, 1}, 
//          {1, 1, 0, 0},
//          {0, 1, 1, 1}}
// Output:
// DDRDRR DRDDRR
// Explanation:
// The rat can reach the destination at 
// (3, 3) from (0, 0) by two paths - DRDDRR 
// and DDRDRR, when printed in sorted order 
// we get DDRDRR DRDDRR.
// Example 2:
// Input:
// N = 2
// m[][] = {{1, 0},
//          {1, 0}}
// Output:
// -1
// Explanation:
// No path exists and destination cell is 
// blocked.
// Your Task:  
// You don't need to read input or print anything. Complete the function printPath() which takes N and 2D array m[ ][ ] as input parameters and returns the list of paths in lexicographically increasing order. 
// Note: In case of no path, return an empty list. The driver will output "-1" automatically.

// Expected Time Complexity: O((N2)4).
// Expected Auxiliary Space: O(L * X), L = length of the path, X = number of paths.
  
  
  

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
// User function template for C++

class Solution{
    public:
    
    vector<string>v;
    
    void dfs(int i,int j,string path,vector<vector<int>>m,int n,vector<vector<int>>&vis)
    {
        
        //all base conditions 
        if(i<0 or j<0 or i>=n or j>=n)
        {
            //check boundary condition here that pointer is not pointing outside of matrix boundary if pointing than simply return
            return;
        }
        
        if(m[i][j]==0 or vis[i][j]==1)
        {
            //if path we choose found the block somewhere found  0 than return because we can not pass out from there 
            //or if path we have found if some block is already visited than return 
            return;
        }
        
        if(i==n-1 and j==n-1)
        {
            //if we reached at the end of the block it means path found than simply push back that path to our result vector
            
            v.push_back(path);
            return;
        }
        
        
        //if all conditions are not satisfied that means new node found which violated above condition
        //than mark it visited 
        vis[i][j]=1;
        
        //than recursively call all possible ptah from the current node and upadte the path
        dfs(i-1,j,path+'U',m,n,vis);
        dfs(i+1,j,path+'D',m,n,vis);
        dfs(i,j-1,path+'L',m,n,vis);
        dfs(i,j+1,path+'R',m,n,vis);
        
        //if not found the path valid at middle than mark it unvisited again for  further explore time 
        vis[i][j]=0;
        
        
        
        
    }
    
    vector<string> findPath(vector<vector<int>> &m, int n) {
        // Your code goes here
        int size=m.size();
        vector<vector<int>>vis(size,vector<int>(size));
        //if starting block is zero than traversal ifs not possible 
        if(m[0][0]==0)
        {
            return v;
        }
        
        //if last block is 0 than there is no use of searching end block in a maze
        if(m[n-1][n-1]==0)
        {
            return v;
        }
        
        string path="";
        
        dfs(0,0,path,m,n,vis);
        sort(v.begin(),v.end());
        return v;
        
    }
};

    


//

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<vector<int>> m(n, vector<int> (n,0));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cin >> m[i][j];
            }
        }
        Solution obj;
        vector<string> result = obj.findPath(m, n);
        if (result.size() == 0)
            cout << -1;
        else
            for (int i = 0; i < result.size(); i++) cout << result[i] << " ";
        cout << endl;
    }
    return 0;
}  // } Driver Code Ends
