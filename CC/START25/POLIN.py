for _ in range(int(input())):
    n=int(input())
    q1=list()
    q2=list()
    
    while n:
        x,y=list(map(int,input().split()))
        q1.append(x)
        q2.append(y)
        n=n-1
    print(len(set(q1))+len(set(q2)))
