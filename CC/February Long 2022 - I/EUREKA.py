import math 
for _ in range(int(input())):
    n=int(input())
    f=(0.143*n)
    f1=f**n
    temp=f1
    if temp-math.floor(temp)<0.5:
        print(math.floor(temp))
    else:
        print(math.floor(temp)+1)
