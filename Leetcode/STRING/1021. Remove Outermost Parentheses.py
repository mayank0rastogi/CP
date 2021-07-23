class Solution:
    def removeOuterParentheses(self, s: str) -> str:
        
        ans=""
        open=0;
        for i in s:
            if i=='(':
              open=open+1
              if open>1:
                ans+=i
            
        
            else:
                if open>1:
                    ans+=i
                open=open-1
        return ans
        
