for _ in range(int(input())):
    n=int(input())
    cnt=0
    m=1
    l=[0 for i in range(6)]
    for i in range(1,len(l)):
        l[i]=n%10 #sending last no to i th index
        n=n//10 # updating n
        if(l[i]!=0):
            cnt+=1
    print(cnt)
    for i in range(1,len(l)):
        if(l[i]!=0):
            print(l[i]*m,end=" ")
        m=m*10
    
    # for i in range(0,len(l)):
    #     print(l[i])
