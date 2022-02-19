arr=[1, 1, 1, 1, 1]
# arr=[1,1,2,3]
n=len(arr)
s=3
# s=1



def subsetsum(arr,s,n,dp):
    for i in range(n+1):
        for j in range(s+1):
            if i==0:
                dp[i][j]=0
            if j==0:
                dp[i][j]=1
    for i in range(1,n+1):
        for j in range(1,s+1):
            if arr[i-1]<=j:
                dp[i][j]=(dp[i-1][j-arr[i-1]] + dp[i-1][j])
            else:
                dp[i][j]=dp[i-1][j]
    return dp[n][s]
def target_sum(arr,s,n):
    arr_s=0
    for i in range(len(arr)):
        arr_s+=arr[i]
    
    sum_s1=(arr_s+s)//2

    dp=[[0 for i in range(sum_s1+1)] for j in range(n+1)]
    
    return subsetsum(arr,sum_s1,n,dp)


print(target_sum(arr,s,n))
    
    
    
    
    
