


#include <bits/stdc++.h>
using namespace std;




class Solution{
  public:
    int longestKSubstr(string s, int k) 
    {
   
    unordered_map<char,int>ump;
    int i=0,j=0;
    int mx=-1;
    while(j<s.length())
    {
        ump[s[j]]++;
        
        if(ump.size()<k)
        {
            j++;
        }
        
        else if(ump.size()==k)
        {
            mx=max(mx,j-i+1);//j-i+1 the window size of the candidate which hits the the size of K
            j++;
        }
        else if(ump.size()>k)
        {
            while(ump.size()>k)
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


int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        int k;
        cin >> k;
        Solution ob;
        cout << ob.longestKSubstr(s, k) << endl;
    }
}
  
