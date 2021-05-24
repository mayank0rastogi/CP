'''

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

'''
def get_min(a,n):
 res=a[0]
 for i in range(1,n):
     res=min(res,a[i])
 return res
     
def get_max(a,n):
 res=a[0]
 for i in range(1,n):
     res=max(res,a[i])
 return res
     
if __name__ == '__main__':
 a=[12, 1234, 45, 67, 1]
 n=len(a)
 print ("Minimum element of array:", get_min(a, n))
 print ("Maximum element of array:", get_max(a, n))
    