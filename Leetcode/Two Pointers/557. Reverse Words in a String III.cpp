// Given a string s, reverse the order of characters in each word within a sentence while still preserving whitespace and initial word order.

 

// Example 1:

// Input: s = "Let's take LeetCode contest"
// Output: "s'teL ekat edoCteeL tsetnoc"
// Example 2:

// Input: s = "God Ding"
// Output: "doG gniD"
 

// Constraints:

// 1 <= s.length <= 5 * 104
// s contains printable ASCII characters.
// s does not contain any leading or trailing spaces.
// There is at least one word in s.
// All the words in s are separated by a single space.


class Solution {
public:
    
    string reverseWords(string s) {
       string ans="";
        for(int i=0;i<s.length();i++)
        {
            string word="";
            
            while(s[i]!=' ' && i<s.length())//gives us every single word upto first occur space 
            {
                word+=s[i];
                i++;
            }
            
            reverse(word.begin(),word.end());//reverse that one word 
            ans+=word;//add it to the ans
            ans+=' ';//add again the space
        }
        int n=ans.length();
        ans=ans.substr(0,n-1);
        return ans;
        
        
    }
};
