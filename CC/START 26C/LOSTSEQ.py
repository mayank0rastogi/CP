for _ in range(int(input())):
    
    n=int(input())
    
    b=[int(x) for x in input().split()]
    if sum(b)%2==0:
        print("YES")
    else:
        print("NO")
