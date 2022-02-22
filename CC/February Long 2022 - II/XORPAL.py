for _ in range(int(input())):
    n=int(input())
    s=str(input())
    c=True
    c0=0
    c1=0
    for i in s:
        if i=='0':
            c0+=1
        else:
            c1+=1
            
    if(n%2==0):
        if(c0==c1 or c0==n or c1==n):
            print("YES")
        elif c0%2==0 and c1%2==0:
            print("YES")
        else:
            print("NO")
    else: #for odd length it should always be 0
        print("YES")


# Insights
# If n is even 
# 1)c0==c1
# 2)c0==n or c1==n
# 3)c0%2==0 and c1%2==0
