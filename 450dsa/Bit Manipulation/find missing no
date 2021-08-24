# /******************************************************************************
# 1001(9)  XOR(^)  0101(5) --> 1100(12)
 
# how below code is basically works

# (a1^a2^a4^a5) ^ (a1^a2^a3^a4^a5) where a1^a1=0 so only a3 left which will return my function  presently
# *******************************************************************************/
def main():
    a=list()
    a.append(1)
    a.append(2)
    a.append(4)
    a.append(5) 
    a.append(6)
   
    n=len(a)
    print("Missing No is :",find_Missing_no_using_xor(a,n))

def find_Missing_no_using_xor(a,n):
    # // For xor of all the elements in array
    x1 = a[0];
 
    # // For xor of all the elements from 1 to n+1
    x2 = 1;
 
    
    for i in range(1,n):
        x1=x1^a[i]
 
  
    for i in range(2,n+2):
        x2=x2^i
 
    return (x1 ^ x2);

if __name__ == '__main__':
   main()
    
