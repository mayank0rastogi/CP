x1,x2,x3=list(map(int,input().split()))
l=list()
l.append(x1)
l.append(x2)
l.append(x3)

l.sort()
a1=abs(l[0]-l[1])
a2=abs(l[1]-l[2])
ans=(a1+a2)
print(ans)




