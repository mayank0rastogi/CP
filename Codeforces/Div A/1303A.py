for _ in range(int(input())):
    s=input()
    pos1,pos2,cnt=0,0,0
    for i in range(len(s)):
        if s[i]=='1':
            pos1=i
            # print(pos1)
            break
    for i in range(len(s)-1,pos1,-1):
        # print(s[i])
        if s[i]=='1':
            pos2=i
            # print(pos2)
            break
    for i in range(pos1,pos2):
        if s[i]=='0':
            cnt+=1
        else:
            continue
            

    print(cnt)        
