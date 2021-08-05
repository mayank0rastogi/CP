class Solution:
    def flipAndInvertImage(self, image: List[List[int]]) -> List[List[int]]:
        result=[]
        # get=[]
        for i in image:
            print(i[::-1])
            # get.append(i[::-1])
            result.append(list(map(lambda x:0 if x==1 else 1,i[::-1])))
        
        return result
