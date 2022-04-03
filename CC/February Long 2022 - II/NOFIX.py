for _ in range(int(input())):
    n=int(input())
    
    arr=[int(x) for x in input().split()]
    c=0
    k=0
    for i in range(0,len(arr)):
        k=i+c+1
        if k==arr[i]:
            c=c+1
    print(c)
# Approach-->
# 1)in this basically every matched  operation we find it means other elemnets of arr is disturb 
# due to this we check for same arr just by adding that matched operation into that ith index 
            
