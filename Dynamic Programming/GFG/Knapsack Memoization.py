val = [60, 100, 120 ]
wt = [10, 20, 30 ]
W=50
n=len(val)
#intialize 2d dp array with all value with -1
dp=[[-1 for i in range(W+1)] for j in range(n+1)]

def knapsack(val,wt,W,n):
    if n==0 or W==0:
        return 0
    if dp[n][W]!=-1:
        return dp[n][W]
    if wt[n-1]<=W:
        dp[n][W]=max(val[n-1]+knapsack(val,wt,W-wt[n-1],n-1),knapsack(val,wt,W,n-1))
        return dp[n][W]
    elif wt[n-1]>W:
        dp[n][W]=knapsack(val,wt,W,n)
        return dp[n][W]
print(knapsack(val,wt,W,n))
