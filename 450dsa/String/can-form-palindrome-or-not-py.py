def can_form_palindrome(strr):
    get=[];
    
    for i in range(len(strr)):
        if(strr[i] in get):
            get.remove(strr[i])
        else:
            get.append(strr[i])
   # check condition if list lenght is even it lenght is 0 rather its length is 1
    if(len(strr)%2==0 and len(get)==0 or (len(strr)%2==1 and len(get)==1)):
       return True;
    else:
        return False;
if (can_form_palindrome("geeksforgeeks")):
    print("Yes")
else:
    print("No")
 
if (can_form_palindrome("geeksogeeks")):
    print("Yes")
else:
    print("No")
            
    