for _ in range(int(input())):
    n,k=list(map(int,input().split()))
    s=input()
    p=0
    # print(int(n/2))
    
        
        
    for i in range(0,int(n/2)):
        if s[i]!=s[n-1-i]:
            p=p+1

    # print(p)
    rem_sol=k-p
    if (rem_sol>=0 and rem_sol%2==0) or (rem_sol>=0 and n%2==1):
        print("YES")
    else:
        print("NO")
