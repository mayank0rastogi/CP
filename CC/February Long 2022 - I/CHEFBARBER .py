for _ in range(int(input())):
    n,m=list(map(int , input().split()))#total no of customer
    #m minutes per customer
    if n==0:
        print(0)#time
    else:
        print(n*m)#time
