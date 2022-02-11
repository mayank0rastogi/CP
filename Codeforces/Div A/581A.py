# for _ in range(int(input())):
a,b=list(map(int,input().split()))
max_diff=0
max_same=0
if a>b:
    max_diff=b
    max_same=a-b
    print(max_diff,"", max_same//2)
        
elif b>a:
    max_diff=a
    max_same=b-a
    print(max_diff,"", max_same//2)
else:
    max_diff=a
    max_same=0
    print(max_diff,"", max_same)
        
    
        
