for _ in range(int(input())):
    x=int(input())
    s=input()
    Carlsen=0
    Chef=0
    draw=0
    for i in range(0,len(s)):
        if s[i]=="C":
            Carlsen+=1
        elif s[i]=="N":
            Chef+=1
        else:
            draw+=1
    Carlsen=2*(Carlsen+draw)
    
    Chef=2*(Chef+draw)
    if Carlsen>Chef:
        print(60*x)
    elif Chef>Carlsen:
        print(40*x)
    else:
        print(55*x)
