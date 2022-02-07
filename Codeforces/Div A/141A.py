def solve(a,b,c):
    final=str(a+b)
    final=sorted(final)
    # final = "". join(final)
    # print(final)
    
    # print(final)
    c=sorted(c)

    # print(final)
    # print(c)
    if(final==c):
       return True
    else:
        return False
    
    
    
if __name__ == '__main__':
    a=input()
    b=input()
    c=input()
    
    re=solve(a,b,c)
    
    # print(re)
    if re==True:
      print("YES)
    else:
       print("NO)
            
    
