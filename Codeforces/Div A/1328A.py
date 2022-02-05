t=int(input())
while t>0:
    a,b=[int(x) for x in input().split()]
    mod=a%b
    if mod>0:
        print(b-mod)
    else:
        print(0)
    t=t-1
