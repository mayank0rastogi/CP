
arr=[int(x) for x in input().split()]

# print(temp)
c=0
#consider worst and best score as their first elment of the index
max_worst=arr[0]
max_best=arr[0]
for i in range(1,len(arr)):
        
    if(arr[i]<max_worst):
        max_worst=arr[i]
        c=c+1
    elif (arr[i]>max_best):
        max_best=arr[i]
        c=c+1
        
    
        
print(c)
    
    
