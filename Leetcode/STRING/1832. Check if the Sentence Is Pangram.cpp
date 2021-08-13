// A pangram is a sentence where every letter of the English alphabet appears at least once.

// Given a string sentence containing only lowercase English letters, return true if sentence is a pangram, or false otherwise.

 

// Example 1:

// Input: sentence = "thequickbrownfoxjumpsoverthelazydog"
// Output: true
// Explanation: sentence contains at least one of every letter of the English alphabet.
// Example 2:

// Input: sentence = "leetcode"
// Output: false
 

// Constraints:

// 1 <= sentence.length <= 1000
// sentence consists of lowercase English letters.

// C++ Solution:

class Solution {
public:
    bool checkIfPangram(string sentence) {
        vector<int>v(26,0);//initially we assigned count of all the character will be zero
        //now interate over the vector
        //unorderd_map<char,int>un (26,0);
        
        for(char x:sentence)
        {
            //suppose a ascii value is 97 so v[97-97] so a counter will increase from 0 to 1 and               
            //soo on for all the another variable and same for repeated variables;
            v[x-97]++;
        }
        
        for(int i=0;i<v.size();i++)
        {
            if(!v[i])
            {
                return false;
            }
           return true;
        }
    }
};

// Another approach using set as set contains only unique elements

class Solution {
public:
    bool checkIfPangram(string sentence) {
        set<char>st;
        if(sentence.length()<26)
        {
            return false;
        }
        for(auto ch: sentence)
        {
            st.insert(ch);
        }
        if(st.size()==26)
        {
            return true;
        }
        else
        {
         return false;   
        }
    }
};
