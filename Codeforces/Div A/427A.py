police_we_have=0
will_go_untreated=0
n=int(input())
    
arr=[int(x) for x in input().split()]

for i in range(0,len(arr)):
    if arr[i]>0:
        police_we_have+=arr[i]
    else:
        if police_we_have<1:
            will_go_untreated+=1
        else:
            police_we_have-=1
    
print(will_go_untreated)

        
        
    
    
    
