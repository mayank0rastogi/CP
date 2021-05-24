
def reverseList(A , start , end):
    while start < end:
        A[start], A[end] = A[end], A[start]
        start += 1
        end -= 1
A =list()
N = int(input("Enter the no of elements :")) 

for i in range(0,N):
    B=int(input("enter list element one by one:"))
    A.append(B)
    
print(A)
print("___________________")
reverseList(A, 0, N-1)

print("Reversed list is")

print(A)
