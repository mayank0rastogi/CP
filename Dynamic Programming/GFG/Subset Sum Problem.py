arr=[3, 34, 4, 12, 5, 2]
s=9
n=len(arr)
dp=[[False for i in range(s+1)] for j in range(n+1)]

def subset_sum(arr,s,n):
    
    
        
    
    
        
    
    
    for i in range(n+1):
        for j in range(s+1):
            if i==0:# # If sum is not 0 and arr is empty,
                dp[i][j]=False
            if j==0: # # If sum s is 0, but arr is not empty then answer is true
                dp[i][j]=True
    
    
    #here weight array replaced wth arr and weight 'W' is replaced with s
    for i in range(n+1):
        for j in range(s+1):
            # if i==0:
            #     dp[i][j]=False
            # if j==0:
            #     dp[i][j]=True
            
            if arr[i-1]<=j:
                dp[i][j]= (dp[i-1][j-arr[i-1]] or dp[i-1][j])
            else:
                dp[i][j]=dp[i-1][j]
                
    #to see complete matrix             
    # for i in range(n + 1):
    #     for j in range(s+ 1):
    #         print (dp[i][j], end =" ")
    #     print()
    return dp[i][j]


print(subset_sum(arr,s,n)==True,"found subset sum")


