def rotate(arr,n):
     q=arr[n-1]
     for i in range(n-1,0,-1):#in this last -1 indicates that how mnay steps loop increase example:5,5-1=4,4-1=3....
         arr[i]=arr[i-1]
     arr[0]=q
    

arr=[1, 2, 3, 4, 5]
n=len(arr)
print("before roatating \n")
for i in range(0,n):
    print(arr[i])
rotate(arr,n)
print("after rotating \n")
for i in range(0,n):
    print(arr[i])