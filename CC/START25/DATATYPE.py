for _ in range(int(input())):
    n,x=list(map(int,input().split()))
    if n>=x:
        print(x)
    else:
        while(n<x):
            x=x-n-1
        print(x)
        
