class Solution:
    def sortArrayByParity(self, nums: List[int]) -> List[int]:
        #faster approach
        even=list()
        odd=list()
        for x in nums:
            if x%2!=0:
                odd.append(x)
            else:
                even.append(x)
        return even+odd
            
        
        #not optimized 
        # temp=[]
        # for x in nums:
        #     if x%2==0:
        #         temp.append(x)
        # for y in nums:
        #     if y%2!=0:
        #         temp.append(y)
        # return temp
        
        
        #little bit optimized
        # return [i for i in nums if i%2==0] + [i for i in nums if i%2!=0]
        
