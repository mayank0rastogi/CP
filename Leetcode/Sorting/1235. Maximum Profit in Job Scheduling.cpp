// We have n jobs, where every job is scheduled to be done from startTime[i] to endTime[i], obtaining a profit of profit[i].

// You're given the startTime, endTime and profit arrays, return the maximum profit you can take such that there are no two jobs in the subset with overlapping time range.

// If you choose a job that ends at time X you will be able to start another job that starts at time X.

 

// Example 1:



// Input: startTime = [1,2,3,3], endTime = [3,4,5,6], profit = [50,10,40,70]
// Output: 120
// Explanation: The subset chosen is the first and fourth job. 
// Time range [1-3]+[3-6] , we get profit of 120 = 50 + 70.
// Example 2:



// Input: startTime = [1,2,3,4,6], endTime = [3,5,10,6,9], profit = [20,20,100,70,60]
// Output: 150
// Explanation: The subset chosen is the first, fourth and fifth job. 
// Profit obtained 150 = 20 + 70 + 60.

class Solution {
public:
    
   static bool comp(vector<int>a,vector<int>b)
    {
        return a[1]<b[1];
    }
    
    int jobScheduling(vector<int>& startTime, vector<int>& endTime, vector<int>& profit) {
        
        int n=startTime.size();
        vector<vector<int>>v(n);
        for(int i=0;i<n;i++)
            
        {
           int st=startTime[i];
            int et=endTime[i];
            int prf=profit[i];
            v[i]={st,et,prf};
            
        }
        sort(v.begin(),v.end(),comp);//sort by default according to first value but by using comprator i have try to sort the values with second values
        
        int dp[n];
        dp[0]=v[0][2];
        
        for(int i=1;i<n;i++)
        {
            int include=v[i][2];
            int last=-1;
            int low=0;
            int high=i-1;
            while(low<=high)
            {
                int mid=(low+high)/2;
                if(v[mid][1]<=v[i][0])//endt<=starttime
                {
                    last=mid;
                    low=mid+1;
                }
                else
                {
                    high=mid-1;//if overlapping
                }
            }
            //check whether last is not equal to -1 if yes that mean we not find anything 
            if(last!=-1)
            {
                include+=dp[last];
            }
            
            int exclude=dp[i-1];
            
            dp[i]=max(include,exclude);
        }
        return dp[n-1];
    }
};
