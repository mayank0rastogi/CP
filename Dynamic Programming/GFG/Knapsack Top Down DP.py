val = [60, 100, 120]
wt = [10, 20, 30]
W=50
n=len(wt)

# def initialize()
#initialize all 2d array with zero value 
dp=[[0 for i in range(W+1)] for j in range(n+1)]

def knapsack(val,wt,W,n):
    for i in range(n+1):# i--> n
        for j in range(W+1):#j---> W
            if i==0 or j==0:
                dp[i][j]=0

            elif wt[i-1]<W:
                dp[i][j]=max(val[i-1]+dp[i-1][j-wt[i-1]],dp[i-1][j])
            else:
                dp[i][j]=dp[i-1][j]
    return dp[i][j]
print(knapsack(val,wt,W,n))

#replacing recursive to completely a matrix that store precomputed results
#Approach
# 1)replacing base condtion which we have used in recursive Approach to placing '0' to its 1 row and column in the matrix
# 2)replacing recurive calls to store result in dp[][] matrix
# 3) we are returnig dp[i][j] as we get our result in last block
