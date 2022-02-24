for _ in range(int(input())):
    n=int(input())
    arr=[int(x) for x in input().split()]
    sum,ocnt,ecnt=0,0,0
    for i in range(len(arr)):
        sum+=arr[i]
        if arr[i]%2!=0 or sum==1:
            ocnt+=1
        else:
            ecnt+=1
        
        
        
    if sum%2!=0 or sum==1: # it means no odd sum is possible
        print("YES")
    else:
        if ocnt!=0 or ecnt!=0: # this also means odd sum is possible
            print("YES")
        else:
            print("NO") # this means even sum 
    
    
