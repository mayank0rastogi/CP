n=int(input())
arr=[int(x) for x in input().split()]

# for i in range(len(arr)):
#     print(arr[i],end=" ")

cnt_curr,max_subseuence=1,1

for i in range (len(arr)-1):
    # print(arr[i+1])
    if arr[i]<arr[i+1]:
        cnt_curr+=1
        if(cnt_curr>max_subseuence):
            max_subseuence=cnt_curr
    else:
        cnt_curr=1
print(max_subseuence)
