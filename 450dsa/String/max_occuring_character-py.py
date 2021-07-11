ascci_size=256
def get_max_occuring_character(str):
    count = [0]*ascci_size
    
    max=0
    result=''
    
    for i in str:
        count[ord(i)]=count[ord(i)]+1
    
    for i in str:
        if(max<count[ord(i)]):
          max=count[ord(i)]
          result=i
    return result
    
str="sample string"
print("maximum occuring character : "+get_max_occuring_character(str));