for _ in range(int(input())):
    
    x,y=list(map(int,input().split()))
    
    banana=x//2
    if y>=banana:
        print(banana)
    else:
        print(y)
    
    
