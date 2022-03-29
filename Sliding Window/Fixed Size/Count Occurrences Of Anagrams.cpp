// { Driver Code Starts
#include <bits/stdc++.h>

using namespace std;



class Solution{
public:
	int search(string pat, string txt) 
	{
	    // code here
	    unordered_map<char,int>ump;
	    for(auto i: pat)
	    {
	        ump[i]++;
	    }
	   // for(auto i: ump)
	    
	   // {
	   //     cout<<i.first<<" "<<i.second;
	   // }
	    int k = pat.size();//size of window
        int count = ump.size();//to keep track of distinct character in window
        int ans = 0;
        int i = 0, j = 0;
  
	    while(j < txt.size()) 
	    {

        if(ump.find(txt[j]) != ump.end()) 
        {
           ump[txt[j]]--;
	    
	   
    	     if(ump[txt[j]] == 0)
    	     {
                 count--;
             }
        }
         
         if(j - i + 1 < k) 
         { 
             j++;
         }

        else if(j - i + 1 == k) 
        {
          if(count == 0)
          {
            ans++;
          }
        
          if(ump.find(txt[i]) != ump.end()) 
          {
            ump[txt[i]]++;
          
              
              if(ump[txt[i]] == 1)
              {
                count++;
              }
          }
         
        
          i++; j++;
         }
	    }
          
    return ans;
  }
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string pat, txt;
        cin >> txt >> pat;
        Solution ob;
        auto ans = ob.search(pat, txt);
        cout << ans << "\n";
    }
    return 0;
}  // } Driver Code Ends
