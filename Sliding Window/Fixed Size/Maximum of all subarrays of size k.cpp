class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) 
    {
        int i=0,j=0;
        vector<int>ans;
        list<int>l;
        while(j<nums.size())
        {
            while( l.size()>0 && l.back()<nums[j])//check nums[j] is greater than list previous element if yes than pop all that elmenet
            {
                //as before nums[j] are greatern than previous elmeent so we not need to store it in list we just push_back nums[j]
                l.pop_back();
            }
            l.push_back(nums[j]);
            
            if(j-i+1<k)
            {
                j++;
            }
            
            else if(j-i+1<k)
            {
                ans.push_back(l.front());
                //now slide the window
                // before sliding the window or move i to i++ first check whether 
                //the current position of ith element is present in the list or not
                if(nums[i]==l.front())
                {
                    l.pop_front();
                }
                i++;
                j++;
                
            }
        }
        
        return ans;
    }
       
};
