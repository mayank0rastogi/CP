class Solution {
public:
    int maxIncreaseKeepingSkyline(vector<vector<int>>& grid) 
    {
        
      // Algorithms have 3 steps:
      //   1- Find row max of all rows append in array row.
      //   2. Find col max of all cols append in array col.
      //   3. add difference of min(row[i],col[j])) and grid[i][j].
        vector<int>row;
        vector<int>col;
        int c=0,e=0;
        int n=grid.size();
        // for(int i=0;i<n;i++)
        // {
        //     r=0;
        //     for(int j=0;j<n;j++)
        //     {
        //       if(r<grid[i][j])
        //       {
        //           // cout<<grid[i][j]<<endl;
        //           r=grid[i][j];
        //           cout<<"row->"<<r<<" ";
        //       }
        //         // cout<<endl;
        //     }
        //     row.push_back(r);
        // }
          for(int i=0;i<n;i++)
        {
            long r=*max_element(grid[i].begin(), grid[i].end());    //Finding maximum integer of every row and saving it in a "row" array
            row.push_back(r);
        }
        // cout<<endl;
        for(int i=0;i<n;i++)
        {
           c=0;
            for(int j=0;j<n;j++)
            {
              
              if(c<grid[j][i])
              {
                  c=grid[j][i];
                  // cout<<"col->"<<c<<" ";
              }
            }
            col.push_back(c);
        }
        
        for(int i=0;i<n;i++)
        {

            for(int j=0;j<n;j++)
            {
                // cout<<"minimum value-->"<<min(row[i],col[j])<<" ";
                // cout<<"value of grid"<<grid[i][j]<<" ";
                e+=min(row[i],col[j])-grid[i][j];
                // cout<<"final value-->"<<e<<" ";
            }
        }
     return e;   
    }
};
