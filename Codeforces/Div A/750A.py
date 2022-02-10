#not accepted
# n,k=list(map(int,input().split()))
# actual_time_we_have=240
# time_to_solve=actual_time_we_have-k#18
# #print(time_to_solve)
# arr=list()
# arr.insert(0,0)
# for i in range(1,n):
#     arr.append(i*5)
# s=arr[0]
# # # # print(s)
# c=0

#error
# for i in range(1,len(arr)):
   
#     # print(i)
#     if s<time_to_solve:
#         s=s+arr[i]

#         # s=s+arr[i]
#         # print(s)
#         c=c+1                    #2 3 4
#         # print(c)

#logic to solve the error
# for i in range(1,len(arr)):
#     if time_to_solve==0:
#         c=0
#         break;
#     elif s<time_to_solve:
#         s=s+arr[i]
#         if time_to_solve<s:
#             break
#         c=c+1
    
# print(c)


# for i in arr:
#     print(i,end=" ")

#Can do in this way---  
n,k=list(map(int,input().split()))

arr=list()
arr.insert(0,0)
for i in range(1,n+1):
    arr.append(i*5)
# for i in arr:
#     print(i,end=" ")

c=0
actual_time_to_reach=k
for i in range(1,n+1):
    if actual_time_to_reach<=240:
        actual_time_to_reach+=arr[i]
        if actual_time_to_reach>240:
            break
   
        c=c+1
print(c)
