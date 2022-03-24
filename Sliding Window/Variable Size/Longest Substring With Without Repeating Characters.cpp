class Solution 
{
public:
    int lengthOfLongestSubstring(string s)
    {
        int mx=0;
        int i=0,j=0;
        unordered_map<char,int>ump;
        while(j<s.size())
        {
            ump[s[j]]++;
            
            if(ump.size()>j-i+1)
            {
                j++;
            }
            
            if(ump.size()==j-i+1)
            {
                mx=max(mx,j-i+1);
                j++;
            }
            
            else if(ump.size()<j-i+1)
            {
                while(ump.size()<j-i+1)
                {
                    ump[s[i]]--;
                    
                    if(ump[s[i]]==0)
                    {
                        ump.erase(s[i]);
                    }
                    i++;
                }
                j++;
            }
        }
        return mx;
    }
};
