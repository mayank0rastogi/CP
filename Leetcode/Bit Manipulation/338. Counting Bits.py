class Solution:
    def countBits(self, n: int) -> List[int]:
        
        ans=list()
        c=0
        for i in range(0,n+1):
            c=str(bin(i)).count('1')#counting bit of  at every no
            ans.append(c)
        return ans
        
