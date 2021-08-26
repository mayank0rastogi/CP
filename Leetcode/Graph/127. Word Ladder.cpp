// A transformation sequence from word beginWord to word endWord using a dictionary wordList is a sequence of words beginWord -> s1 -> s2 -> ... -> sk such that:

// Every adjacent pair of words differs by a single letter.
// Every si for 1 <= i <= k is in wordList. Note that beginWord does not need to be in wordList.
// sk == endWord
// Given two words, beginWord and endWord, and a dictionary wordList, return the number of words in the shortest transformation sequence from beginWord to endWord, or 0 if no such sequence exists.

 

// Example 1:

// Input: beginWord = "hit", endWord = "cog", wordList = ["hot","dot","dog","lot","log","cog"]
// Output: 5
// Explanation: One shortest transformation sequence is "hit" -> "hot" -> "dot" -> "dog" -> cog", which is 5 words long.
// Example 2:

// Input: beginWord = "hit", endWord = "cog", wordList = ["hot","dot","dog","lot","log"]
// Output: 0
// Explanation: The endWord "cog" is not in wordList, therefore there is no valid transformation sequence.
 

// Constraints:

// 1 <= beginWord.length <= 10
// endWord.length == beginWord.length
// 1 <= wordList.length <= 5000
// wordList[i].length == beginWord.length
// beginWord, endWord, and wordList[i] consist of lowercase English letters.
// beginWord != endWord
// All the words in wordList are unique.

// Time Complexity-->  O(N*M*26)
//   where N--> no of words in dictionary
//   M--> length of each word
//   26-->iterate and check for every possible character



class Solution {
public:
    int ladderLength(string begin, string end, vector<string>& wordList) {
        
        
        queue<string>q;
        q.push(begin);
        int wordsize=begin.size();
        unordered_set<string> word;  //O(1)
        for(int i=0;i<wordList.size();i++)
        {
            word.insert(wordList[i]);
        }
        
        //check whether end word is present in dictionary or not 
        if(word.find(end)==word.end())
        {
            return 0;
        }
        
        int len=0;
        while(!q.empty())
        {
            len++;//initially increae it to 1
            int qlen=q.size();
            
            for(int i=0;i<qlen;i++)
            {
                 string s=q.front();
                q.pop();
                
                for(int j=0;j<wordsize;j++)
                {
                    char single=s[j]; //taking single character and put every possible characters in it
                    for(char ch='a';ch<='z';ch++)
                    {
                        s[j]=ch;
                        //and check whether it is present in dictionary or not
                        if(s==end)//first check it is equal to end or not if yes increase the len by +1
                        {
                            return len+1;
                        }
                        
                        if(word.find(s)==word.end())
                        {
                            continue;
                        }
                        
                        word.erase(s);//when it found then erase that word from the dictionary and push it into queue
                        q.push(s);
                        
                        
                        
                    }
                    
                    s[j]=single; //update angain to normal for next j iteration or say for next character
                }
            }
          
        }
        return 0;
    }
};
