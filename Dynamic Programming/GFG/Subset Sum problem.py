Not Running 
# dp=[[-1 for i in range(s+1)] for j in range(n+1)]

# # for i in range(n+1):
# #     for j in range(s+1):
# #         print(dp[i][j],end="")
# #     print()
# # print(dp[5][12])

# def subsetsum(arr,n,s):
    
#     if s==0:
#         return 0
#     if n==0:
#         return 1
        
#     # print("hello")
#     if dp[n-1][s]!=-1:
#         # print("hello")
#         return dp[n-1][s]
#     if arr[n-1]<=s:
#         dp[n-1][s]=(subsetsum(arr,n-1,s) or subsetsum(arr,n-1,s-arr[n-1]))
#         return dp[n-1][s]
#     else:
#         dp[n-1][s]=subsetsum(arr,n-1,s);
#         return dp[n-1][s]
        
# arr=[1, 5, 3, 7, 4]
# s=12
# n=len(arr)    

# if(subsetsum(arr,s,n)):
#     print("yes")
# else:
#     print("no")



#Running code
# n = 5
# a = [1, 5, 3, 7, 4]
# sum = 21

# dp = [[-1 for i in range(101)] for j in range(101)]


# def subsetSum(a, n, sum):

# 	if (sum == 0):
# 		return 1
	
# 	if (n <= 0):
# 		return 0
		

# 	if (dp[n][sum] != -1):
# 		return dp[n][sum]

# 	if (a[n - 1] > sum):
# 		dp[n][sum] = subsetSum(a, n - 1, sum)
# 		return dp[n][sum]
# 	else:
		

# 		dp[n][sum] = subsetSum(a, n - 1, sum) or subsetSum(a, n - 1, sum - a[n - 1])
# 		return dp[n][sum] 




# if (subsetSum(a, n, sum)):
#     print("YES")
# else:
# 	print("NO")

    
# for i in range(n+1):
#      for j in range(sum+1):
#          print(dp[i][j],end="")
#      print()



