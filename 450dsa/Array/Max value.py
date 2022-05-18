Problem : https://practice.geeksforgeeks.org/problems/max-value1205/1#
import sys

class Solution:
    def maxVal(self, a, n):
        #Code Here
        if n<2:
            print("erro ")
            return 0
        
        res= -sys.maxsize-1
        
        #O(n^2) Approach.....
        
        # for i in range(n):
        #     for j in range(n):
                
        #         if res<((a[i]-i) - (a[j] - j)):
        #             res=((a[i] - i) - (a[j] - j))
        # return res
        
        #O(n) Approach....
        
        min_value= sys.maxsize
        max_value= -sys.maxsize-1
        
        for i in range(n):
            if a[i]-i > max_value:
                max_value=a[i]-i
            if a[i]-i < min_value:
                min_value=a[i]-i
        return (max_value-min_value)       
            
        
        
        




def main():

    T = int(input())

    while(T > 0):
        n = int(input())
        a = [int(x) for x in input().strip().split()]
        ob=Solution()
        print(ob.maxVal(a, n))

        T -= 1


if __name__ == "__main__":
    main()





