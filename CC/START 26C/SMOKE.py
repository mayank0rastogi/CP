for _ in range(int(input())):
    n,x,y=[int(x) for x in input().split()]
    ans=float('inf')
    for b in range(n+1):
        pbus=b*100
        cars=max(0,(n-pbus+3)//4)
        ans=min(ans,x*b+y*cars)
    print(ans)
