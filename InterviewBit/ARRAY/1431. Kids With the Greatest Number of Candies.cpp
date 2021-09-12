class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        
        int maxofarry=0;
        
       // to find the max element amon the elemnts 
        for(int i=0;i<candies.size();i++)
        {
            maxofarry=max(maxofarry,candies[i]);
        }
        //main computation of distribution of candies
        vector<bool> ans;
        for(int i=0;i<candies.size();i++)
        {
        
            if(candies[i]+extraCandies>=maxofarry)
            {
                ans.push_back(true);
            }
            else
            {
                ans.push_back(false);
            }
        }
        return ans;
    }
};