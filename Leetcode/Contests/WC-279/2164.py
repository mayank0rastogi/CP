#Problem : https://leetcode.com/contest/weekly-contest-279/problems/sort-even-and-odd-indices-independently/

class Solution:
    def sortEvenOdd(self, nums: List[int]) -> List[int]:
        if len(nums)==2:
            return nums
        
        _even_arr=[]
        _odd_arr=[]
        
        #storing all even index element and odd index elmenet into two diff list
        for i in range(len(nums)):
            if i%2==0:
                _even_arr.append(nums[i])
            else:
                _odd_arr.append(nums[i])
        
        
        _even_arr.sort()
        # print(_even_arr)#asecending
        _odd_arr.sort(reverse=True)# to convert ascending arry into descending
        # print(_odd_arr)
        
        eidx=0
        oidx=0
        
        for i in range(len(nums)):
            if i%2==0:
                nums[i]=_even_arr[eidx]
                eidx=eidx+1
            else:
                nums[i]=_odd_arr[oidx]
                oidx=oidx+1
        
        return nums
        
        
