for _ in range(int(input())):
    a,b,n=list(map(int,input().split()))
    ans,su=0,0
    while su<=n:
        if a>b:
            
            b+=a
            su=b
                # print(a)
            ans=ans+1
        else:
            
            a+=b
            su=a
                # print(b)
            ans=ans+1
            
        if su>n:
            break
        
    print(ans)

            
