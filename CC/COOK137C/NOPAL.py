
t=int(input())
while t>0:
    
    n=int(input())
    s=""
    curr='b'
    for i in range(0,n):
        s=s+curr
        curr=chr(ord(curr)+1)
            
        if curr=='e':
            curr='b'
    print(s)
    t=t-1
        
            
            


        
        
