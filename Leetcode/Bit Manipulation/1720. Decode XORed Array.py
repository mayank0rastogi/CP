class Solution:
    def decode(self, encoded: List[int], first: int) -> List[int]:
        ans=[]
        ans.append(first)
        # n=len(encoded)
        # for i in range(0,n):
        #     ans.append(encoded[i]^ans[i])
        # return ans
        
        
        #2nd method uncomment above see the result
        for i in encoded:
            first=first^i
            ans.append(first)
        return ans
