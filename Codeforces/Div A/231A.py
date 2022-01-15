Problem Link: https://codeforces.com/problemset/problem/231/A
    
n = int(input())
c=0
for i in range(n):
    problems = [x for x in input().split() if int(x) == 1] #only takes 1 in the list by applying if conditions because no need of taking 0 
    if len(problems)>=2:
        c+=1
        
# print(problems)
print(c)
