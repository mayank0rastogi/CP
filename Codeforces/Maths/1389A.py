for _ in range(int(input())):
    l,r=list(map(int,input().split()))
    x,y=l,2*l
    if y>r:
        x=-1
        y=-1
    print(x," ",y)
        
        
    
