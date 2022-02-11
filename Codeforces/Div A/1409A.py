for _ in range(int(input())):
    a,b=list(map(int,input().split()))
    if a==b:
        print("0")
    else:
        if abs(a-b)%10==0:
            print(abs(a-b)//10)
        else:
            print((abs(a-b)//10)+1)
    
