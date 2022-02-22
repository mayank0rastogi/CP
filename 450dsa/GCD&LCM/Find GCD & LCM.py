def computer_LCM(x,y):
    # One way to calculate LCM
     #Step 1 : choose the greater number
    if x > y:
       greaterNo = x
    else:
       greaterNo = y
       
       
    while(True):
       if((greaterNo % x == 0) and (greaterNo % y == 0)):
           lcm = greaterNo
           break
       else:
      
           greaterNo += 1
    return lcm

print(computer_LCM(54,24))


def GCD(x,y):
    while(y):
        x,y=y,x%y
    return x
def another_way(x,y):
    # another way to calculate by calcualting GCD of the no and dividing it into multiplication of two no
    lcm=(x*y)//GCD(x,y)
    return lcm

print(another_way(54,24))    

    

    
