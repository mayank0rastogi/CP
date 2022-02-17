for _ in range(int(input())):
    a,b,x,y=list(map(int,input().split()))
    tot_units_power=x*y
    moon_power=a*b
    if tot_units_power>=moon_power:
        print("YES")
    else:
        print("NO")
