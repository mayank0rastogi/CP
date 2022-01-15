//Problem Link : https://codeforces.com/problemset/problem/158/A

n,k=map(int,input().split())
 
no_rounds=[int(x) for x in input().split()]
next_round=[x for x in no_rounds if(x>0 and x>=no_rounds[k-1]) ]
print(len(next_round))
