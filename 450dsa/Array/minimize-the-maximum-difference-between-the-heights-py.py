def get_minimize(arr,n,k):
    arr.sort()
    res=arr[n-1]-arr[0];
    small,big=0,0
     
    for i in range(1,n):
        small =min(arr[0]+k,arr[i]-k)
        big =max(arr[i-1]+k,arr[n-1]-k)
        res=min(res,big-small)
    return res
    
arr=[1, 10, 14, 14, 14, 15]
k=6
print(get_minimize(arr,len(arr),k))
        