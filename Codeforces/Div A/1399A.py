for _ in range(int(input())):
    n=int(input())
    # arr=list()
    # while n:
    #     arr.append(int(input()))
    # n=n-1    
    
    arr=sorted(set([int(x) for x in input().split()]))
    # print(len(arr))
    c=True
    for i in range(0,len(arr)-1):
        # print(i)
        # print(abs(arr[i]-arr[i+1]))
        temp=int(abs(arr[i]-arr[i+1]))
        if temp>1:
            # print("converting")
            c=False
            # print("converted")
            break
            
    
    if c==True:
        print("YES")
    else:
        print("NO")
