# Problem Link:https://codeforces.com/problemset/problem/71/A

n = int(input())
 
for i in range(n):
    s= input()
    
    l=len(s)
    # print(l)
    if l>10:
        print(s[0]+str(l-2)+s[l-1])
    else:
        print(s)
