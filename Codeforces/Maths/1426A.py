import math
for _ in range(int(input())):
    n,x=list(map(int,input().split()))
     # apratmnet in which peta lives in
    # print(n//x)
    # print(math.round(n//x)+1)
    ans=1
    for i in range(2,n,x): #start with 2 floor and check until n with +x steps in every iterations 
        ans+=1
    print(ans)
    
