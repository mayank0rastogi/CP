s1 = input()
s2 = input().split()
# print(b)


res = 'NO'
for i in range(len(s2)):
    if s1[0] == s2[i][0] or s1[1] == s2[i][1]:
        res = 'YES'
print (res)
