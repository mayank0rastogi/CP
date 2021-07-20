/******************************************************************************
Split the binary string into substrings with equal number of 0s and 1s

Given a binary string str of length N, the task is to find the maximum count of consecutive substrings str can be divided into such that all the substrings are balanced i.e.
they have equal number of 0s and 1s. If it is not possible to split str satisfying the conditions then print -1.
Example: 
 

Input: str = “0100110101” 
Output: 4 
The required substrings are “01”, “0011”, “01” and “01”.
Input: str = “0111100010” 
Output: 3 

Input: str = “0000000000” 

Output: -1

*******************************************************************************/
#include <bits/stdc++.h>
using namespace std;
int countBinarySubstrings(string s) {
        int n=s.length();
        int res=0;
        int cnt1=0,cnt2=0;
        
        for(int i=0;i<n;i++)
        {
            if(s[i]=='0')
                cnt1++;
            
            else
            {
                cnt2++;
            }
            
            if(cnt1==cnt2)
            {
                res++;
            }
        }
        
        if(cnt1!=cnt2)
        {
            return -1;
        }
        
        return res;
    }
int main()
{
    string s="0100110101";
    
   cout<<countBinarySubstrings(s);

    return 0;
}
